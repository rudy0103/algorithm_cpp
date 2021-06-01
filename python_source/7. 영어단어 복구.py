from sys import stdin as s
s=open("input.txt","rt")

st=s.read().strip()

res=""
for c in st:
    if c!=' ':
        res+=c

print(res.lower())