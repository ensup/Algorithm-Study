#include <stdio.h>

typedef int mung;

mung is_zero=1;

void check_num(int arr[], int num,int *len) {
    int key=1;
    if(num == 0) {
        if(is_zero) {
            (*len)++;
            is_zero=0;
            key=0;
        }
        else
            key=0;
    }
    else {
        for(int i=0;i<*len;i++)
            if(num == arr[i])
                key=0;
    }
    if(key) {
        arr[*len] = num;
        (*len)++;
    }
}
int main() {
    mung E,len=0;
    mung remainder[10]={0};
    for(mung tang=0;tang<10;tang++) {
        scanf("%d",&E);
        check_num(remainder,E%42,&len);
    }
    printf("%d\n",len);
}