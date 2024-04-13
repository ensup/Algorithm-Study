#Baekjoon 4153
while 1:
    a,b,c=map(int,input().split())
    if(a==b==c):
        break
    longest=max(a,b,c)**2
    rest=(a**2)+(b**2)+(c**2)-(max(a,b,c)**2)
    if(longest==rest):
        print('right')
    else:
        print('wrong')

