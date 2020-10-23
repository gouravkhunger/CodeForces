// https://codeforces.com/problemset/problem/1399/A
// 1399 A. Remove Smallest
// File Creation Date: 17-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

abs_val(int a) {
  if(a<0)
  return (a*-1);
  else
  return a;
}

int calculate(int a[], int len) {
  int num = 0;
  sort(a, a+len);
  for(int i = 0; i < len-1;i++){
    if(abs_val(a[i]-a[i+1])<=1){
      if(a[i]>a[i+1]){
        a[i+1]=0;
      } else {
        a[i]=0;
      }
    }
  }
  for(int i=0;i<len;i++){
    if(a[i]!=0){
      num++;
    }
  }
  return num;
}

int main() {
  ios::sync_with_stdio(false);

  int t;
  cin>>t;
  string result[t];
  for(int i=0; i<t;i++){
      int n;
      cin>>n;
      int a[n];
      for(int j=0;j<n;j++){
        cin>>a[j];
      }
      int num = calculate(a, n);
      if(num==1){
        result[i]="YES";
      } else {
        result[i]="NO";
      }
  }

  for(int i=0;i<t;i++){
    cout<<result[i]<<"\n";
  }
}
