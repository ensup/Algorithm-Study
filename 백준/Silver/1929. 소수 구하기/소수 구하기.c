#include <stdio.h>
#include <math.h>
int main(void){
    int fst,second;
    scanf("%d %d",&fst,&second);
    int sie[second+1];
    for(int i=0;i<=second;i++)
        sie[i]=1;
    int sq=sqrt(second);
    for(int i=2;i<=sq+1;i++)
        if(sie[i])
            for(int j=i+i;j<=second;j=j+i)
                    sie[j]=0;

    for(int k=fst;k<=second;k++)
        if(sie[k] && k != 1)
            printf("%d\n",k);

    return 0;
}