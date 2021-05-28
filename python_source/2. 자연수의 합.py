from sys import stdin as s
# s=open("input.txt","rt")

a,b=map(int,s.readline().split())

r=0
for i in range(a,b+1):
    r+=i
    if i==a:
        print(str(i),end=" ")
    elif i<=b:
        print("+ "+str(i),end=" ")

    if  i==b:
        print("= "+str(r))