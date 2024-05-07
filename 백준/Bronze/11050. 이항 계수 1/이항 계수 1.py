from math import factorial
one,two=map(int,input().split())
ans=factorial(one)/(factorial(two)*factorial(one-two)) #one!/two!*(one-two)!
ans=int(ans) #type==int
print(ans)