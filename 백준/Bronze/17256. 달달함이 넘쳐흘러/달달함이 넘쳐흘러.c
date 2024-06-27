#include <stdio.h>
int main() {
    int a[3];
    int b[3];
    int c[3];
    scanf("%d%d%d",a,a+1,a+2);
    scanf("%d%d%d",c,c+1,c+2);
    b[0]=c[0]-a[2];
    b[1]=c[1]/a[1];
    b[2]=c[2]-a[0];
    printf("%d %d %d\n",b[0],b[1],b[2]);
    return 0;
}