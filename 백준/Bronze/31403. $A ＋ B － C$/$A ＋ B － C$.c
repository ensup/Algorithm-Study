#include <stdio.h>
#include <math.h>
int main() {
    int A,B,C,str_num;
    scanf("%d%d%d",&A,&B,&C);
    printf("%d\n",(A+B)-C);
    str_num=(A*(pow(10,(int)log10(B)+1)))+B;
    printf("%d\n",str_num-C);
}