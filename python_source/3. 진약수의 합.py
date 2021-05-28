from sys import stdin as s
# s=open("input.txt","rt")

n=int(s.readline())

r=1
print(1,end="")
for i in range(2,int(n/2)+1):
    if n%i == 0:
       r+=i
       print(" +",str(i),end="")
print(" =",str(r))

       