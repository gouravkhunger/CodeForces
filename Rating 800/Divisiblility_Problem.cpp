//https://codeforces.com/contest/1328/problem/A
//1328 A. Divisibility Problem
//19-Oct-2020

#include <iostream>
using namespace std;

main(){

int t,i,a,b;

    cin>>t;
    while(t--){
        cin>>a>>b;

        if(a%b==0){
            cout<<"0\n";
        }
        else{
            cout<<b-(a%b)<<"\n";
        }

    }
}
