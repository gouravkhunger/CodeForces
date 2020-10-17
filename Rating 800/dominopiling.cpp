// https://codeforces.com/problemset/problem/50/A
// 50 A. Domino Pilinge
// 16-Oct-2020

#include <iostream>
using namespace std;

int calculate(int m, int n) {
  return m*n/2;
}

int main() {
  ios::sync_with_stdio(false);
  int m, n;
  cin>>m>>n;
  cout<<calculate(m, n);
}
