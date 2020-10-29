// https://codeforces.com/problemset/problem/263/A
// 263 A. Beautiful Matrix
// File Creation Date: 16-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int leastMoves(int matrix[5][5]){
  int row=0, col=0, rowMoves, colMoves;
  for(int i=0; i<5;i++){
    for(int j=0; j<5;j++){
      if(matrix[i][j]==1){
        row=i+1;
        col=j+1;
        break;
      }
    }
    if(row!=0 && col!=0){
      break;
    }
  }
  rowMoves = abs(3-row);
  colMoves = abs(3-col);
  return rowMoves+colMoves;
}

int main() {
  ios::sync_with_stdio(false);
  int matrix[5][5];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>matrix[i][j];
    }
  }
  cout<<leastMoves(matrix);
}
