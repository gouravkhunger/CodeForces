/*
https://codeforces.com/problemset/problem/1433/A
677 A. Boring Apartments
File Creation date: 26-10-2020
Author:Siddharth(https://github.com/siddharthmagadum16)
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n%10;i++){
        sum+=10;
    }
    int i=1;
    while(n>0){
        sum+=i;
        i++;
        n/=10;
    }
    printf("%d\n",sum);
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
