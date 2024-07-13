#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a];
    for(int i=0;i<a;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<a;i++)
        if(arr[i]<b)
            printf("%d ",arr[i]);
}