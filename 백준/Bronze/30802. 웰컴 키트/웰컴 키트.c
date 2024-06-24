#include <stdio.h>

int main(void) {
    int man;
    int sz[6]={0};
    int mung_t,mung_p,t_amount=0;
    scanf("%d",&man);
    for(int i=0;i<6;i++)
        scanf("%d",sz+i);
    scanf("%d %d",&mung_t,&mung_p);
    for(int i=0;i<6;i++){
        if(*(sz+i)%mung_t)
            t_amount+=*(sz+i)/mung_t+1;
        else
            t_amount+=*(sz+i)/mung_t;
    }
    printf("%d\n",t_amount);
    printf("%d %d\n",man/mung_p,man%mung_p);

    return 0;
}