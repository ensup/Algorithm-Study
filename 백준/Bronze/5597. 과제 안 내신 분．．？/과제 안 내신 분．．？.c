#include <stdio.h>
int main(){
    int students[31]={0};
    int std_input;
    for(int i=0;i<28;i++){
        scanf("%d",&std_input);
        students[std_input]=1;
    }
    for(int i=1;i<31;i++){
        if(!(students[i]))
            printf("%d\n",i);
    }
    return 0;
}