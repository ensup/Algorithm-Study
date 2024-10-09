rejected=0
man=int(input())
arr=[0]*101
ipt=list(map(int,input().split()))
for i in range (man):
    if arr[ipt[i]]==0:
        arr[ipt[i]]=1
    else:
        rejected += 1
print(rejected)