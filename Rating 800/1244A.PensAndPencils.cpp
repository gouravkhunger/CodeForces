// https://codeforces.com/contest/1244/problem/A
// 1244 A. Pens and Pencils
// File Creation Date: 18-11-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int t;
  cin>>t;
  for(int i=0;i<t;i++) {
    int a,b,c,d,k,x=0,y=0;
    cin>>a>>b>>c>>d>>k;
    while(a>0){
      a-=c;
      x++;
    }
    while(b>0){
      b-=d;
      y++;
    }
    if(x+y<=k) {
      cout<<x<<" "<<y<<"\n";
    }
    else cout<<-1<<"\n";
  }
	return 0;
}
