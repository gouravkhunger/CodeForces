// https://codeforces.com/problemset/problem/546/A
// 546 A. Soldiers and Bananas
// File Creation Date: 17-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int compute(int k, int n, int w) {
  int bill = 0;
  for(int i = 1; i <= w; i++) {
    bill+=(i*k);
  }
  if(bill<n){
    return 0;
  } else {
    return bill-n;
  }
}

int main() {
  ios::sync_with_stdio(false);

  int k,n,w;
  cin>>k>>n>>w;
  cout<<compute(k, n, w);
}
