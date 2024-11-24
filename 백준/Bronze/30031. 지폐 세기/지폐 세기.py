ipt=int(input())
bills={136:1000,142:5000,148:10000,154:50000}
total=0
for i in range(ipt):
    tmp,tmp2=map(int,input().split())
    total += bills[tmp]
print(total)