#include <stdio.h>

int main(void) {
    int rpt,hight,width,num;
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++) {
        scanf("%d%d%d",&hight,&width,&num);
        if(num%hight)
            printf("%d%02d\n",num%hight,num/hight+1);
        else
            printf("%d%02d\n",hight,num/hight);
    }
    return 0;
}
