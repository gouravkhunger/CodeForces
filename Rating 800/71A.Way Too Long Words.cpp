// https://codeforces.com/problemset/problem/71/A
// 71A. Way Too Long Words
// File Creation Date: 15-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <iostream>
using namespace std;

string truncate(string s) {
  if(s.length()>10) {
    string firstL, lastL, newString;
    firstL=s[0];
    lastL=s[s.length()-1];
    newString = firstL + to_string((s.substr(1, s.size() - 2)).length()) + lastL;
    return newString;
  } else {
    return s;
  }
}

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin>>n;
  string array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

  for(int i=0;i<n;i++){
    cout<<truncate(array[i])<<"\n";
  }

  return 0;

}
