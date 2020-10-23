// https://codeforces.com/contest/1328/problem/A
// 1328 A. Divisibility Problem
// File Creation Date: 21-Oct-2020
// Author: Gourav Khunger(https://github.com/GouravKhunger)

// This is the for-loop implementation of the first solution of this problem.
// Logic of solving it is same, but it is another way the problem can be approached.
// Logic credits: Sreejith K Pai(https://github.com/sk-pai)

#include <bits/stdc++.h>
using namespace std;

void compute(int i, int a, int b, int res[]) {
  if(a%b==0)
    res[i]=0;

  else {
    res[i]=b-(a%b);
  }
}

int main() {
  ios::sync_with_stdio(false);

  int t,a,b;
  cin>>t;
  int res[t];
  for(int i=0;i<t;i++){
    cin>>a>>b;
    compute(i, a, b, res);
  }
  for(int i=0;i<t;i++){
    cout<<res[i]<<"\n";
  }
}
