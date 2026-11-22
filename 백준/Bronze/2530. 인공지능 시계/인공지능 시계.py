h, m, s = map(int, input().split())
t = int(input())
ns = t % 60
s = s + ns
t -= ns
nh = t//(60*60)
h += nh
t -= nh*60*60
m += t//60
if s>=60:
    s-=60
    m+=1
if m>=60:
    m-=60
    h+=1
if h>=24:
    h=h%24

print(h,m,s)