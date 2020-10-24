// https://codeforces.com/problemset/problem/996/A
// 996 A. Hit the Lottery
// File Creation Date: 17-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int n, k;
      cin>>n>>k;
      string s; char init='a';
      int flag = 0;
      for(int j=0;j<n;j++){
        s+=init;
        init++;
        flag++;
        if(flag==k){
          init='a';
          flag = 0;
        }
      }
      cout<<s<<"\n";
    }
}
