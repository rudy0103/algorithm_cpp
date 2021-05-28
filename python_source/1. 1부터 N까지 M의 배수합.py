from sys import stdin as s
import time
# s=open("input.txt","rt")


n,m=map(int,s.readline().split())
sum=0
for i in range(1,n+1):
    if i%m==0:
        sum+=i

print(sum)