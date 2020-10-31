// https://codeforces.com/problemset/problem/1296/A
// 1296 A. Array with Odd Sum
// File Creation Date: 31-Oct-2020
// Author: Saurabh(https://github.com/saurabh786iit)

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum=0,flag1=0,flag2=0;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%2==1)
                flag1 = 1;
            if(v[i]%2==0)
                flag2 = 1;
        }
        if(sum % 2 == 1){
            cout<<"YES\n";
        }
        else if(sum % 2 == 0 && n%2==0 && (flag1 ==0 || flag2 ==0)){
            cout<<"NO\n";
        }
        else if(sum % 2 == 0 && n%2==1 && flag1 ==0){
            cout<<"NO\n";
        }
        else 
            cout<<"YES\n";
    }
    return 0;
}
