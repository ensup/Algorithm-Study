from math import factorial
num1=int(input())
fact=factorial(num1)
t=0
while(1):
    if(fact%10**(t+1)==0):
        t=t+1
    else:
        break
print(t)