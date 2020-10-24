'''
    https://codeforces.com/contest/1385/problem/B
    1385 B. Restore the Permutation by Merger
    File Creation Date: 24-Oct-2020
    Author: Biraj(https://github.com/BirajCoder)
'''

for _ in range(int(input())):
    n=int(input())
    li=list(map(int,input().split()))
    if len(li)==1:
        print(0)
    else:
        max1=-1
        max2=-1
        index1=-1
        index2=-1
        for i in range(len(li)-1,0,-1):
            if li[i-1]<li[i]:
                max1=li[i]
                index1=i
                break
        i-=1
        while(i>0):
            if li[i-1]>li[i]:
                max2=li[i-1]
                index2=i-1
                break
            i-=1
        if index2 == -1 and index1 == -1:
            print(0)
        else:
            print(i)