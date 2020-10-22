// https://codeforces.com/problemset/problem/617/A
// 617 A. Elephant
// File Creation Date: 18-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int steps(int x) {
  int steps = 0;
  while(x>=5){
    steps+=(x/5);
    x%=5;
  }
  while(x>=4){
    steps+=(x/4);
    x%=4;
  }
  while(x>=3){
    steps+=(x/3);
    x%=3;
  }
  while(x>=2){
    steps+=(x/2);
    x%=2;
  }
  while(x>=1){
    steps+=(x/1);
    x%=1;
  }
  return steps;
}

int main() {
  ios::sync_with_stdio(false);
  int x;
  cin>>x;
  cout<<steps(x);
}
