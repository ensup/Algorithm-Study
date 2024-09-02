/*
    빨빨빨빨 빨강민
*/
#include <stdio.h>

int main(void)
{
    int a;
    int b = 0;
    scanf("%d",&a);
    while(a>b){
        int c=0;
        while(b>=c){
            printf("*");
            c++;
        }
        printf("\n");
        b++;
    }


    return 0;
}