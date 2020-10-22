// https://codeforces.com/problemset/problem/96/A
// 96 A. Football
// File Creation Date: 19-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

string evaluate(string s) {
  int ans = 1, temp = 1;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      ++temp;
    }
    else {
      ans = max(ans, temp);
      temp = 1;
    }
  }
  ans = max(ans, temp);
  if(ans>=7) {
    return "YES";
  } else {
    return "NO";
  }
}

int main() {
  ios::sync_with_stdio(false);

  string s;
  cin>>s;
  cout<<evaluate(s);
}
