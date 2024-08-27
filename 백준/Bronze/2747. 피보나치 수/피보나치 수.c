//https://www.acmicpc.net/problem/2747
#include <stdio.h>

int fibo(int arr[],int len){
    arr[1]=1;
    for(int i=0;i<len-1;i++) {
        arr[i+2]=arr[i]+arr[i+1];
    }
    return arr[len];
}

int main(void){
    int num;
    int fibo_arr[45]={0};
    scanf("%d",&num);
    printf("%d\n",fibo(fibo_arr,num));

    return 0;
}