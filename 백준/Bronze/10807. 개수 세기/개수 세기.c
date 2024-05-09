#include <stdio.h>
int main(){
    int amt,fndnum,found=0;
    int arr[100];
    scanf("%d",&amt);
    for(int i=0;i<amt;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&fndnum);
    for(int j=0;j<amt;j++)
        if(arr[j]==fndnum)
            found++;
    printf("%d\n",found);

    return 0;
}