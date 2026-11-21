#include <stdio.h>

int main(void) {
    while (1){
    int a,b;
    if(scanf("%d %d",&a,&b) == EOF)
        return 0;
    else
        printf("%d\n",a+b);
    }
    return 0;
    
}