#include <stdio.h>
#include <stdlib.h>
int compare(const void *first,const void *second){
    return (*(int *)first-*(int *)second);
}

int main(void){
    int rpt;
    scanf("%d",&rpt);
    int nums[rpt];
    for(int i=0;i<rpt;i++)
        scanf("%d",&nums[i]);
    qsort(nums,rpt,sizeof(int),compare);
    for(int i=0;i<rpt;i++)
        printf("%d\n",nums[i]);
}

