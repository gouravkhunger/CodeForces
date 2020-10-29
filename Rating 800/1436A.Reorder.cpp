// https://codeforces.com/problemset/problem/1436/A
// 1436 A. Reorder
// File Creation Date: 15-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n, m, sum=0;
    cin>>n>>m;
    int a[n];
    for(int j=0;j<n;j++) cin>>a[j],sum+=a[j];
    if(sum==m) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
  }
}
