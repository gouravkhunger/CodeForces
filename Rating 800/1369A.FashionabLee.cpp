// https://codeforces.com/contest/1369/problem/A
// 1369 A. FashionabLee
// File Creation Date: 24-Oct-2020
// Author: Ashish(https://github.com/ashk3301)

#include<bits/stdc++.h>
using namespace std;
#define  ull unsigned long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
        if(n%4==0)
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }  
    }
    return 0;  
}
