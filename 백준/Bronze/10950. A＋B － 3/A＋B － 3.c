/*
    C언어 Hello, World! 예제
*/
#include <stdio.h>

int main(void)
{
    int a;
    int b = 0;
    scanf("%d",&a);
    while(a>b){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",x+y);
        b++;
    }


    return 0;
}