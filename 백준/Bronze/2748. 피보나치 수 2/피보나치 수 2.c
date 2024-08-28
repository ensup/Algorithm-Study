#include <stdio.h>

long long fibo(long long arr[],int len){
    arr[1]=1;
    for(int i=0;i<len-1;i++) {
        arr[i+2]=arr[i]+arr[i+1];
    }
    return arr[len];
}

int main(void){
    int num;
    long long fibo_arr[95]={0};
    scanf("%d",&num);
    fibo(fibo_arr,num);
    printf("%lld\n",fibo_arr[num]);

    return 0;
}