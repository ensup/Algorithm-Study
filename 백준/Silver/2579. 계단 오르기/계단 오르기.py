import sys
input = sys.stdin.readline
num=int(input())
val=[]
output=0
for i in range(num):
    val.append(int(input()))
if num<3:
    for i in range(num):
        output+=val[i]
else:
    point=[0]*num
    point[0]=val[0]
    point[1]=val[1]+val[0]
    point[2]=max(val[0]+val[2],val[1]+val[2])
    for i in range(3,num):
        point[i]=max(point[i-3]+val[i-1]+val[i],point[i-2]+val[i])
    output=point[-1]
print(output)