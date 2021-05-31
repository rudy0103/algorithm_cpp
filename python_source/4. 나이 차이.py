from sys import stdin as s
# s=open("input.txt","rt")

n=int(s.readline())

arr=list(map(int,s.readline().split()))
arr.sort()

print(arr[n-1]-arr[0])