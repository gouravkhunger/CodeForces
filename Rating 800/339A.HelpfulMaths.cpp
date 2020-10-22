// https://codeforces.com/problemset/problem/339/A
// 339 A. Helpful Maths
// File Creation Date: 16-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

string rearrange(string s) {
  s.erase(std::remove(s.begin(), s.end(), '+'), s.end());
  sort(s.begin(), s.end());
  string res;
  for(int i=0;i<s.length();i++){
    res += s[i];
    if(i < s.length()-1) res += '+';
  }
  return res;
}

int main(){
  ios::sync_with_stdio(false);

  string s;
  cin>>s;
  cout<<rearrange(s);
}
