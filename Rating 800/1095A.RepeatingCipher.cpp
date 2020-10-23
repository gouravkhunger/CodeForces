// http://codeforces.com/contest/1095/problem/A
// 1095 A. Repeating Cipher
// File Creation Date: 23-Oct-2020
// Author: Lucas Pavanelli (https://github.com/pavalucas)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    int n;
    cin >> n;
    cin >> s;
    string resp = "";
    int j = 1;
    int i = 0;
    while(i < n) {
        resp += s[i];
        i += j;
        j++;
    }
    cout << resp << '\n';
    return 0;
}