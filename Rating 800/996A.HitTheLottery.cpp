// https://codeforces.com/problemset/problem/996/A
// 996 A. Hit the Lottery
// File Creation Date: 17-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int compute(int n) {
  int count = 0;
  while(n>=100){
    count += (n / 100);
    n %= 100;
  }
  while(n>=20) {
    count += (n / 20);
    n %= 20;
  }
  while(n>=10) {
    count += (n / 10);
    n %= 10;
  }
  while(n>=5) {
    count += (n / 5);
    n %= 5;
  }
  while(n>=1) {
    count += (n / 1);
    n %= 1;
  }
  return count;
}

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin>>n;
  cout<<compute(n);
}
