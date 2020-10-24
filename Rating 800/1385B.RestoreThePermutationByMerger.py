'''
    https://codeforces.com/contest/1385/problem/B
    1385 B. Restore the Permutation by Merger
    File Creation Date: 24-Oct-2020
    Author: Biraj(https://github.com/BirajCoder)
'''

for _ in range(int(input())):
    n=int(input())
    li=list(map(int,input().split()))
    new_li=[]
    for i in li:
        if i not in new_li:
            new_li.append(i)
        if len(new_li) == n:
            break
    print(*new_li,sep=" ")
