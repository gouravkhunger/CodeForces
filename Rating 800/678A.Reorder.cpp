/*
https://codeforces.com/problemset/problem/1436/A
678 A. Reorder
File Creation date: 26-10-2020
Author:Siddharth(https://github.com/siddharthmagadum16)
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){ // testcases
	int n,m;
	scanf("%d%d",&n,&m);
	int sum=0,a;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		sum+=a;
	}
	if(sum==m) printf("YES\n");
	else printf("NO\n");
    return;
}
int main(){
    int testcase=1,z=1;
    scanf("%d",&testcase);
    while(z<=testcase){
        solve(); z++;
    }
    return 0;
}
