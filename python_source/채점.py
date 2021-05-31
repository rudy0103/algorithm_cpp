import subprocess as sp
import os, glob
import os.path
import time

procA=None
procB=None

targetdir="."
files=os.listdir(targetdir)

in_txt=glob.glob("in*.txt")
out_txt=glob.glob("out*.txt")
pyfile=glob.glob("*.py")
print(os.getcwd())
print(in_txt)
print(out_txt)
print(pyfile)
# time.sleep(10)

i=0

for T in in_txt:
    f=open(T,"rt")
    OT=out_txt[i]
    f2=open(OT,"rt")
    i+=1
    ans=f2.read()
    data=f.read()
    
    try:
        res=sp.check_output(pyfile,shell=True,input=data,text=True,timeout=3).strip()
        if res==ans:
            print(str(i)+"맞았음")
        else:
            print(str(i)+"틀렸음")
        
    except sp.TimeoutExpired:
        print("Time Exceeded")

    f.close()

time.sleep(1)

    # # print(res)
    # print(res)



# for i in files:
#     if 

# sp.run(['dir'],shell=True,check=True)

