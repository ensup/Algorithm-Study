#include <stdio.h>

int which_is_smaller(int first, int second) {
    if(first<second)
        return first;
    else
        return second;
}

int main(void) {
    int x,y,w,h,x_max,y_max,max;
    scanf("%d%d%d%d",&x,&y,&w,&h);
    x_max=which_is_smaller(x,w-x);
    y_max=which_is_smaller(y,h-y);
    max=which_is_smaller(x_max,y_max);
    printf("%d\n",max);
    return 0;
}