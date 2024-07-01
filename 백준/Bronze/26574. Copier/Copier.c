#include <stdio.h>

int main()
{
    int rpt;
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++){
        int num;
        scanf("%d",&num);
        printf("%d %d\n",num,num);
    }

    return 0;
}