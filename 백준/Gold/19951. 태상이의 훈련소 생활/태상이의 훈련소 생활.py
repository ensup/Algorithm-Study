import sys
ipt=sys.stdin.readline
n,m=map(int, ipt().split())
ground=list(map(int,ipt().split()))
order=[0]*(n+1)
for i in range(m):
    st,fin,cmd=map(int, ipt().split())
    order[st-1]+=cmd
    order[fin]-=cmd
pSum=0
for i in range(n):
    pSum += order[i]
    print(ground[i]+pSum,end=' ')