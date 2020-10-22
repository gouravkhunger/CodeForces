// https://codeforces.com/problemset/problem/236/A
// 236 A. Boy or Girl
// File Creation Date: 16-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int countDistinct(string s) {
  unordered_map<char, int> m;
  for (int i = 0; i < s.length(); i++) {
    m[s[i]]++;
  }
  return m.size();
}

string verdict(string s){
  int distinct = countDistinct(s);
  if(distinct%2==0){
    return "CHAT WITH HER!";
  } else {
    return "IGNORE HIM!";
  }
}

int main() {
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  cout<<verdict(s);
}
