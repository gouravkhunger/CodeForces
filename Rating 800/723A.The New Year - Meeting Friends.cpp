// https://codeforces.com/problemset/problem/723/A
// 723 A. The New Year: Meeting Friends
// File Creation Date: 17-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int calculate(int a, int b, int c){
  int array[3];
  array[0] = a;
  array[1] = b;
  array[2] = c;
  sort(array, array+3);
  return (array[1]-array[0])+(array[2]-array[1]);
}

int main() {
  ios::sync_with_stdio(false);

  int a, b, c;
  cin>>a>>b>>c;
  cout<<calculate(a, b, c);
}
