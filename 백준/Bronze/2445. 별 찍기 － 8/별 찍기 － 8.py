rpt=int(input())
for i in range(rpt):
    s = '*'*(i+1) + ' '*(rpt-i-1)*2 + '*'*(i+1)
    print(s)
for i in range(rpt-1):
    s = '*'*(rpt-i-1) + ' '*(i+1)*2 + '*'*(rpt-i-1)
    print(s)