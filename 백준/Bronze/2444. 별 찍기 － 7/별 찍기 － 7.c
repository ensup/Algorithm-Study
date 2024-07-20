#include <stdio.h>

int main() {
    int rpt;
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++) {
        for(int k=0;k<rpt-i-1;k++)
            printf(" ");
        for(int j=0;j<i*2+1;j++)
            printf("*");
        puts("");
    }
    for(int i=rpt-2;i>=0;i--) {
        for(int k=0;k<rpt-i-1;k++)
            printf(" ");
        for(int j=0;j<i*2+1;j++)
            printf("*");
        puts("");
    }
}