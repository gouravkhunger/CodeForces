// https://codeforces.com/problemset/problem/141/A
// 141 A. Amusing Joke
// File Creation Date: 16-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

string determine(string a, string b, string c) {
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  string result = a+b;
  sort(result.begin(), result.end());
  if(result==c){
    return "YES";
  } else {
    return "NO";
  }
}

int main() {
  ios::sync_with_stdio(false);
  string guestname, hostname, pile;
  cin>>guestname>>hostname>>pile;
  cout<<determine(guestname, hostname, pile);
}
