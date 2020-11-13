// http://codeforces.com/contest/474/problem/A
// 474 A. Keyboard
// File Creation Date: 28-Oct-2020
// Author: Lucas Pavanelli (https://github.com/pavalucas)

#include <bits/stdc++.h>
using namespace std;

string keyb = "qwertyuiopasdfghjkl;zxcvbnm,./";

int findKey(char c) {
  for(int i = 0; i < keyb.size(); i++) {
    if(keyb[i] == c) return i;
  }
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  char c;
  cin >> c;
  string s;
  cin >> s;

  if(c == 'R') {
    for(int i = 0; i < s.size(); i++) {
      cout << keyb[findKey(s[i])-1];
    }
    cout << '\n';
  } else {
    for(int i = 0; i < s.size(); i++) {
      cout << keyb[findKey(s[i])+1];
    }
    cout << '\n';
  }
}
