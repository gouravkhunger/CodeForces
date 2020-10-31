// https://codeforces.com/problemset/problem/1437/A
// 1437 A. Marketing Scheme
// File Creation Date: 28-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  int t;
  cin>>t;

  for(int i=0;i<t;i++) {
    int l, r;
    cin>>l>>r;
    if(l*2>r)
      cout<<"YES"<<"\n";
    else
      cout<<"NO"<<"\n";
  }
}
