// https://codeforces.com/problemset/problem/1385/B
// 1385 B. Restore the Permutation by Merger
// File Creation Date: 24-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++) {
    int n;
    cin>>n;
    int a[2*n];
    vector<int> v;
    for(int j=0;j<2*n;j++) {
      cin>>a[j];
    }
    for(int j=0;j<2*n;j++) {
      auto pos = find(v.begin(), v.end(), a[j]);
      if(pos==v.end()) {
        v.push_back(a[j]);
      }
    }
    for(auto x : v) {
      cout<<x<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
