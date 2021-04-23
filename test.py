# import sys
# m=1e9+7
# def gt(n):
#     res=1;
#     if(n==0 or n==1):
#         return res
#     else: 
#         for i in range(2,n+1):
#             res=res*i
#         return res
# def cnk(n,k):
#     return int(gt(n)/(gt(k)*gt(n-k))%m)
# t=int(input())
# while t>0:
#     n,k = map(int,sys.stdin.readline().split())
#     print(cnk(n,k))
#     t=t-1
import sys
from math import comb
m=1e9+7
t=int(input())
while t>0:
    n,k = map(int,sys.stdin.readline().split())
    print(int(comb(n,k)%m))
    t=t-1