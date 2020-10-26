/*
https://codeforces.com/problemset/problem/1436/B
678 B. Prime Square
File Creation date: 26-10-2020
Author:Siddharth(https://github.com/siddharthmagadum16)
*/

#include <bits/stdc++.h>
using namespace std;


void solve(){ // testcases
int n;
scanf("%d",&n);
    int arr[n+1][n+1];
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) arr[i][j]=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(i==j){
            arr[i][j]=1;
            if(j-1>0) arr[i][j-1]=1;
            if(j+1<=n) arr[i][j+1]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

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
