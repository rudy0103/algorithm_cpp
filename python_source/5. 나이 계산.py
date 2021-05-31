from sys import stdin as s
# s=open("input.txt","rt")


id=s.readline().strip()

age=int(id[:2])

if id[7]=='1' or id[7]=='2':
    print(119-age+1,end=" ")
else:
    print(19-age+1,end=" ")


if id[7]=='1' or id[7]=='3':
    print("M")
else:
    print("W")