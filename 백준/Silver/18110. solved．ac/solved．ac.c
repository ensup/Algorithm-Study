#include <stdio.h>
#include <stdlib.h>

int compare(const void *first,const void *second){ //오름 차순
    return (*(int *)first-*(int *)second);
}

int main(void)
{
    int rpt,int_man,int_result,sum=0;
    double man;
    float result;
    scanf("%d",&rpt);
    if(!(rpt))
        puts("0");
    else {
        int arr[300000];
        for(int i=0;i<rpt;i++) {
            scanf("%d",arr+i);
        }
        qsort(arr,rpt,sizeof(int),compare); //오름차순
        int_man=(rpt*3)/20; //15%
        man=((float)rpt*3)/20;
        if((man-int_man)>=0.5) //반올림
            int_man++;
        for(int i=0;i<int_man;i++) //절사평균 - 하위 15% 제거
            *(arr+i)=0;
        for(int i=0;i<int_man;i++) //절사평균 - 상위 15% 제거
            *(arr+rpt-i-1)=0;
        for(int i=0;i<rpt;i++)
            sum+=*(arr+i);
        int_result=sum/(rpt-(int_man*2));
        result=(float)sum/(rpt-(int_man*2));
        if((result-int_result)>=0.5)
            int_result++;
        printf("%d\n",int_result);
    }
    return 0;
}
