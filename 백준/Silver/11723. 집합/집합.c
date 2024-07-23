#include <stdio.h>
#include <string.h>
//====================================================
int is_data_there(int *set, int data) {
    return set[data];
}
void add_func(int *set, int data) {
    set[data] = 1;
}
void rm_func(int *set, int data) {
    set[data] = 0;
}
void tog_func(int *set, int data) {
    if(set[data])
        set[data]=0;
    else
        set[data]=1;
}
void all_func(int *set) {
    for(int i=1;i<21;i++)
        set[i]=1;
}
void empty_func(int *set) {
    for(int i=1;i<21;i++)
        set[i]=0;
}
//====================================================
int main(void) {
    int rpt,ipt_data,len=0;
    int set[25]={0};
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++) {
        char cmd[10];
        scanf("%s",cmd);
        if(!(strcmp(cmd,"add"))) {
            scanf("%d",&ipt_data);
            add_func(set,ipt_data);
        }
        if(!(strcmp(cmd,"remove"))) {
            scanf("%d",&ipt_data);
            rm_func(set,ipt_data);
        }
        if(!(strcmp(cmd,"check"))) {
            scanf("%d",&ipt_data);
            printf("%d\n",is_data_there(set,ipt_data));
        }
        if(!(strcmp(cmd,"toggle"))) {
            scanf("%d",&ipt_data);
            tog_func(set,ipt_data);
        }
        if(!(strcmp(cmd,"all"))) {
            all_func(set);
        }
        if(!(strcmp(cmd,"empty"))) {
            empty_func(set);
        }
    }

}