// https://codeforces.com/problemset/problem/112/A
// 112 A. Petya and Strings
// File Creation Date: 16-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <iostream>
using namespace std;

int calculate(string a, string b) {
  for(auto& c : a) {
    c = tolower(c);
  }
  for(auto& c : b) {
    c = tolower(c);
  }
  if(a<b) {
    return -1;
  } else if(a>b) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  ios::sync_with_stdio(false);
  string a, b;
  cin>>a>>b;
  cout<<calculate(a, b);
}
