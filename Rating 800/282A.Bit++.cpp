// https://codeforces.com/problemset/problem/282/A
// 282 A. Bit++
// File Creation Date: 15-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <iostream>
using namespace std;

int execute(int initial, int n, string commands[]){
  for(int i=0; i<n; i++){
    if(commands[i].find("++")<commands[i].length()){
      initial++;
    } else {
      initial--;
    }
  }
  return initial;
}

int main(){
  ios::sync_with_stdio(false);

  int n;
  cin>>n;
  string commands[n];
  for(int i=0;i<n;i++) {
    cin>>commands[i];
  }
  cout<<execute(0, n, commands);
}
