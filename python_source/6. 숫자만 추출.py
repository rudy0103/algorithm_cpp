from sys import stdin as s
# s=open("input.txt","rt")

st=s.readline().strip()

num=""
for i in st:
    if i >='0' and i<='9':
        num+=i
num=int(num)
print(num)

cnt=0
for i in range(1,num+1):
    if num%i==0:
        cnt+=1

print(cnt)
