#include <stdio.h>
int normal_sum(int input){
    int sum=0;
    for(int i=1;i<=input;i++)
        sum += i;
    return sum;
}
int three_sum(int input){
    int sum=0;
    for(int i=1;i<=input;i++)
        sum += i*i*i;
    return sum;
}
int main()
{
    int ipt,nSum,dSum,tSum;
    scanf("%d",&ipt);
    nSum = normal_sum(ipt);
    dSum = nSum * nSum;
    tSum = three_sum(ipt);
    printf("%d\n%d\n%d\n",nSum,dSum,tSum);
    return 0;
}