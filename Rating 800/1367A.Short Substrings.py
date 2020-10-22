'''
    https://codeforces.com/contest/1367/problem/A
    1367 A. Short Substrings
    File Creation Date: 21-Oct-2020
    Author: Winston(https://github.com/WinstonPais)
'''

n=int(input())
for _ in range(n):
    s=input()
    res=s[0]
    for c in range(1,len(s),2):
        res+=s[c]
    print(res)
