'''
    https://codeforces.com/problemset/problem/1420/A
    1420 A. Cubes Sorting
    File Creation Date: 22-Oct-2020
    Author: Winston(https://github.com/WinstonPais)
'''
for _ in range(int(input())):
    n=int(input())
    lst = list(map(int,input().split()))
    flag = 0
    for i in range(1,n):
        if lst[i-1] <= lst[i]:
            flag = 1
            print("YES")
            break
    if flag == 0:
        print("NO")
