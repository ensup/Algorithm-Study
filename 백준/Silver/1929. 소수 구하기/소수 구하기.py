fst,second=map(int,input().split())
sieve = [True] * (second+1)
sq=int(second**0.5)
for i in range(2, sq + 1):
    if sieve[i] == True:           # i가 소수인 경우
        for j in range(i+i, second+1, i): # i이후 i의 배수들을 False 판정
            sieve[j] = False
for i in range(fst, second+1):
    if sieve[i] == True and i != 1:
        print(i)