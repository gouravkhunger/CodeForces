// https://codeforces.com/problemset/problem/231/A
// 231 A. Team
// File Creation Date: 15-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <iostream>
using namespace std;

int calculate(int rows, int array[][3]){
  int rowCount=0, totalCount=0;
  for(int i=0;i<rows;i++){
    for(int j=0;j<3; j++) {
      if(array[i][j]==1){
        rowCount++;
      }
    }
    if(rowCount>1) {
      totalCount++;
    }
    rowCount=0;
  }
  return totalCount;
}

int main () {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int array[n][3];
    for(int i=0;i<n;i++) {
      for(int j=0;j<3;j++){
        cin>>array[i][j];
      }
    }

    cout<<calculate(n, array);

}
