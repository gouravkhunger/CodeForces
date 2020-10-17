// https://codeforces.com/problemset/problem/996/A
// 996 A. Hit the Lottery
// 17-Oct-2020

#include <bits/stdc++.h>
using namespace std;

int compute(int n) {
  int count = 0;
  while(n>=100){
    n-=100;
    count++;
  }
  while(n>=20) {
    n-=20;
    count++;
  }
  while(n>=10) {
    n-=10;
    count++;
  }
  while(n>=5) {
    n-=5;
    count++;
  }
  while(n>=1) {
    n-=1;
    count++;
  }
  return count;
}

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin>>n;
  cout<<compute(n);
}
