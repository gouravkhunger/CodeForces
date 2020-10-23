// https://codeforces.com/problemset/problem/116/A 
// 116 A. Tram 
// File Creation Date: 23-Oct-2020 
// Author: Gourav(https://github.com/GouravKhunger)

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int n,sub=0;
cin>>n;
int a[1005],b[1005],max=0;
 
for(int i=0; i<n; i++)
{
    cin>>a[i]>>b[i];
}
 
for(int i=0; i<n; i++)
{
    sub=sub+b[i]-a[i];
 
    if(sub>max)
        max=sub;
}
 
cout<<max;
 
 
 
}
