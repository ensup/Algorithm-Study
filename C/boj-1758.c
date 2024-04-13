#include <stdio.h>
#include <stdlib.h>

int main(void){
    int compare(const void *a, const void *b)    // 내림차순 비교 함수 구현
{
    int num1 = *(int *)a;    
    int num2 = *(int *)b;    

    if (num1 > num2)    
        return -1;      

    if (num1 < num2)   
        return 1;       

    return 0;    
}
    int rpt;
    scanf("%d",&rpt);
    int tips[rpt];
    for(int i=0;i<rpt;i++)
        scanf("%d",&tips[i]);
    qsort(&tips,sizeof(tips)/sizeof(int),sizeof(int),compare);
    long long res=0;
    for(int j=0;j<rpt;j++)
        if((tips[j]-j)>0)
            res+=tips[j]-j;
        else
            break;
    printf("%lld\n",res);

    return 0;
}
