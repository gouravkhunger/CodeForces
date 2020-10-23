// https://codeforces.com/problemset/problem/405/A
// 405 A. Gravity Flip
// File Creation Date: 23-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr, arr+n);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
