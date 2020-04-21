import os, sys, bisect, copy
from collections import defaultdict, Counter, deque
from functools import lru_cache   #use @lru_cache(None)
if os.path.exists('in.txt'): sys.stdin=open('in.txt','r')
if os.path.exists('out.txt'): sys.stdout=open('out.txt', 'w')
#
def input(): return sys.stdin.readline()
def mapi(arg=0): return map(int if arg==0 else str,input().split())
#------------------------------------------------------------------

for _ in range(int(input())):
    n = int(input())
    a = list(mapi())
    sm = 0
    i =0
    while i<n:
        tmp = a[i]
        sign = -1 if a[i]<0 else 1
        while i<n and sign*a[i]>0:
            if a[i]>tmp:
                tmp = a[i]
            i+=1
            #print(tmp)
        sm+=tmp
        sign = -sign
        if i>=n: break
    print(sm)