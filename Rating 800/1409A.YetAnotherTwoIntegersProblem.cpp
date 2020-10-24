// https://codeforces.com/contest/1409/problem/A
// 1409 A. Yet Another Two Integers Problem
// File Creation Date: 24-Oct-2020
// Author: Ashish(https://github.com/ashk3301)

#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
const int mod = 1'000'000'007;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    //deb(t);

    while (t--)
    {
        int n, i, a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0\n";
            continue;
        }
        else if (a < b)
        {
            int d = b - a, ct = 0;
            for (int i = 10; i >= 1; i--)
            {
                ct += d / i;
                d = d - ((d / i) * i);
            }
            cout << ct << '\n';
        }
        else
        {
            int d = a - b, ct = 0;
            for (int i = 10; i >= 1; i--)
            {
                ct += (d / i);
                d = d - ((d / i) * i);
            }
            cout << ct << '\n';
        }
    }

    return 0;
}
