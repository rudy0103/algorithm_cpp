from sys import stdin as s

# s=open("input.txt","rt")


st=s.readline().strip()

li=[]
for c in st:
    if c=="(":
        li.append(c)
    else:
        if len(li)==0:
            print("NO")
            exit()
        else:
            li.pop()

if len(li)!=0:
    print("NO")
else:
    print("YES")
        


