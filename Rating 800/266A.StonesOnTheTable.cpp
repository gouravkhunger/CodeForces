// https://codeforces.com/problemset/problem/266/A
// 266 A. Stones on the Table
// File Creation Date: 17-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int calculate(int n, string s) {
  int num = 0;
  for(int i=0; i<n; i++){
    if(s[i]==s[i+1]){
      num++;
    }
  }
  return num;
}

int main() {
  ios::sync_with_stdio(false);
  int n;
  string s;
  cin>>n;
  cin>>s;
  cout<<calculate(n, s);
}
