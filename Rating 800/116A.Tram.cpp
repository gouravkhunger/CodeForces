// https://codeforces.com/problemset/problem/116/A
// 116 A. Tram
// File Creation Date: 18-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int compute(int index, int arr[][2]){
  int min = 0, num = 0;
  for(int i = 0; i < index; i++) {
    num-=arr[i][0];
    num+=arr[i][1];
    if(min<num){
      min=num;
    }
  }
  return min;
}

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin>>n;
  int arr[n][2];
  for(int i = 0; i < n; i++) {
    cin >> arr[i][0] >> arr[i][1];
  }
  cout << compute(n, arr);
}
