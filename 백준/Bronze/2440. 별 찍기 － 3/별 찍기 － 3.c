#include <stdio.h>

int main(void) {
    int rpt1=0;
    scanf("%d",&rpt1);
    for(int i=1;i<=rpt1;i++){
        for(int j=i;j<=rpt1;j++)
            printf("*");

        printf("\n");
    }
}