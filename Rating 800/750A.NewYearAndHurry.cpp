// https://codeforces.com/problemset/problem/750/A
// 750 A. New Year and Hurry
// File Creation Date: 31-10-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  int n, k, time = 240, count=0;
  cin>>n>>k;
  time-=k;
  for(int i=1;i<=n;i++) {
    if(time>=(5*i)){
      time-=(5*i);
      count++;
    }
    else break;
  }

  cout<<count<<"\n";

}
