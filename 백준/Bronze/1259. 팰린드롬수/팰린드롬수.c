#include <stdio.h>
#include <string.h>
int main(void){
    while(1){
        char pel[100000];
        int check=0;
        scanf("%s",&pel);
        if(!(strcmp(pel, "0")))
            break;
        int len=strlen(pel);
        for(int i=0;i<len;i++){
            if(pel[i]!=pel[len-1-i])
                check++;
        }
        if(check)
            puts("no");
        else
            puts("yes");
    }

}