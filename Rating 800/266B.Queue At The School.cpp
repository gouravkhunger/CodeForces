// https://codeforces.com/problemset/problem/266/B
// 266 B. Queue at the School
// File Creation Date: File Creation Date: 17-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

string pos(int n, int t, string s){
  for(int i = 0; i < t; i++){
    for(int j = 0; j < n; j++){
      if(s[j]=='B'&&s[j+1]=='G'){
        s[j]='G';
        s[j+1]='B';
        j++;
      }
    }
  }
  return s;
}

int main() {
  ios::sync_with_stdio(false);

  int n, t;
  string s;
  cin>>n>>t;
  cin>>s;
  cout<<pos(n, t, s);
}
