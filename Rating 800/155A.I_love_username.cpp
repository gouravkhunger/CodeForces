// https://codeforces.com/problemset/problem/155/A
// 155 A. I_love_%username%
// File Creation Date: 31-10-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include<iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  int n, a, min, max, count=0;
  cin>>n>>a;
  min=a;max=a;

  for(int i=1;i<n;i++){
    cin>>a;
    if(min>a){
      min=a;
      count++;
    }
    if(max<a) {
      max=a;
      count++;
    }
  }
  cout<<count;
}
