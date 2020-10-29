// https://codeforces.com/problemset/problem/1433/C
// 1433 C. Dominant Piranha
// File Creation Date: 27-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int a[n+2];
    a[0]=0x3f3f3f3f;a[n+1]=0x3f3f3f3f;
    int maxl=0,maxn=-1;
    for(int i=1;i<=n;i++) {
      cin>>a[i];
    }
    for(int i=1;i<=n;i++) {
      if(a[i]>maxl&&(a[i-1]<a[i]||a[i+1]<a[i])) {
        maxl=a[i];
        maxn=i;
      }
    }
    cout<<maxn<<endl;
  }
  return 0;
}
