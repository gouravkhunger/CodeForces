// https://codeforces.com/contest/411/problem/A
// 411 A. Password Check
// File Creation Date: 18-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

string check(string s) {
  if(s.length()>=5){
    bool upperCase = false, lowerCase = false, digit = false;
    for(int i=0;i<s.length();i++){
      if(isdigit(s[i])){
        digit = true;
      } else if(isalpha(s[i])) {
        if(isupper(s[i])){
          upperCase = true;
        } else {
          lowerCase = true;
        }
      }
      if(upperCase&&lowerCase&&digit) {
        return "Correct";
      }
    }
  }
  return "Too weak";
}

int main() {
  ios::sync_with_stdio(false);

  string s;
  cin>>s;
  cout<<check(s);
}
