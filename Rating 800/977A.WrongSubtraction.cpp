// https://codeforces.com/problemset/problem/977/A
// 977 A. Wrong Subtraction
// File Creation Date: 18-0ct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int compute(int n, int k) {
  for(int  i = 0; i < k; i++) {
    if(n%10!=0){
      n-=1;
    } else {
      n/=10;
    }
  }
  return n;
}

int main() {
  ios::sync_with_stdio(false);
  int n, k;
  cin>>n>>k;
  cout<<compute(n, k);
}
