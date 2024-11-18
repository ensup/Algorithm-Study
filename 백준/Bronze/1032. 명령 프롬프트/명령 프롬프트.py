import sys
input = sys.stdin.readline
num=int(input())
val=[]
data=list(input().strip())
for i in range(num-1):
    val.append(input().strip())
for i in val:
    for j in range(len(i)):
        if(data[j]!='?' and i[j]!=data[j]):
            data[j]='?'
print(''.join(data))