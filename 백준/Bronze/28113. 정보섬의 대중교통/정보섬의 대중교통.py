N,A,B=map(int,input().split())
if N>B:
    tran='Bus'
elif A==B:
    trans='Anything'
elif A<B:
    trans='Bus'
else:
    trans='Subway'
print(trans)