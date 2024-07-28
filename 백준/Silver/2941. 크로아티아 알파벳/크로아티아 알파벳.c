#include <stdio.h>
#include <string.h>
int main(){
    char str[105];
    int len,alph=0;
    scanf("%s",str);
    len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i] == '='){
            continue;
        }
        if(str[i] == '-'){
            continue;
        }
        if(str[i] == 'l' && str[i+1] == 'j'){
            continue;
        }
        if(str[i] == 'n' && str[i+1] == 'j'){
            continue;
        }
        if(str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '='){
            continue;
        }
        alph++;
    }
    printf("%d\n",alph);
}