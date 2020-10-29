// https://codeforces.com/problemset/problem/34/B
// 34 B. Dominant Piranha
// File Creation Date: 27-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  int n, m, sum=0;
  cin>>n>>m;
  vector<int> a;
  for(int i = 0; i < n; i++) {
    int v;
    cin>>v;
    a.push_back(v);
  }
  for(int i=0;i<a.size();i++){
    if(a[i]>0) a.erase(a.begin()+i);
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < a.size(); i++) {
    if(a[i]<0&&m>0){
      sum+=a[i];
      m--;
    }
  }
  cout<<abs(sum);
}
