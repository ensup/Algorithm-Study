rpt1 = int(input())
run1 = 1
while run1<rpt1+1:
    a, b=input().split()
    a=int(a)
    b=int(b)
    print('Case #' + str(run1) + ':', str(a+b))
    run1=run1+1