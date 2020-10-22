// https://codeforces.com/problemset/problem/158/A
// 158 A. Next Round
// File Creation Date: 15-Oct-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <iostream>
using namespace std;

int calculate(int pos, int array[], int size) {
  int val = array[pos-1], passed=0;
  for(int i=0; i<size;i++){
    if(array[i]>=val){
      if(array[i]!=0){
        passed++;
      }
    }
  }
  return passed;
}

int main() {
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

  cout<<calculate(k, array, n);

}
