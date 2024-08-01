#include <stdio.h>

int main(){
    int fib[41];
    int rpt,num;
    fib[0]=1; //초기 세팅
    fib[1]=0;
    fib[2]=1;
    for(int i=2;i<42;i++) //피보나치 연산
        fib[i]=fib[i-1]+fib[i-2];
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++){
        scanf("%d",&num);
        printf("%d %d\n",fib[num],fib[num+1]);
    }

    return 0;
}