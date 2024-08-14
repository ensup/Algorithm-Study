#include <stdio.h>
#include <math.h>
int digit_pow(int num) {
    int rtn=1;
    for(int i=0;i<num;i++)
        rtn *= 10;
    return rtn;
}
int main(void) {
    int A,B,C,result,len, checker[10]={0};
    scanf("%d%d%d",&A,&B,&C);
    result = A*B*C;
    len = floor(log10(result))+1;
    for(int i=0;i<len;i++) {
        int digit = (result / digit_pow(i)) % 10;
        checker[digit]++;
    }
    for(int i=0;i<10;i++)
        printf("%d\n",checker[i]);
    return 0;
}
