#include <stdio.h>
#include <string.h>

int main(void)
{
    int rpt;
    int my_stack[10000]={0};
    int sz=0;
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++) {
        char cmd[10];
        int num;
        scanf("%s",cmd);
        if(!(strcmp(cmd,"push"))) {
            scanf("%d",&num);
            my_stack[sz]=num;
            sz++;
        }
        if(!(strcmp(cmd,"pop"))) {
            if(sz) {
                printf("%d\n",my_stack[sz-1]);
                sz--;
            }
            else
                puts("-1");
        }
        if(!(strcmp(cmd,"size")))
            printf("%d\n",sz);
        if(!(strcmp(cmd,"empty")))
            if(sz)
                puts("0");
            else
                puts("1");
        if(!(strcmp(cmd,"top")))
            if(sz)
                printf("%d\n",my_stack[sz-1]);
            else
                puts("-1");

    }
    return 0;
}
