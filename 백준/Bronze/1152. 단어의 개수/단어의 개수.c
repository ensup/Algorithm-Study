#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000005];
    int len,cnt=0;
    scanf("%[^\n]s",ch);
    len=strlen(ch);
    if (len == 0) {
        printf("0\n");
        return 0;
    }
    if(*ch != ' ')
        cnt++;
    for(int i=0;i<len-1;i++){
        if(ch[i]==' ')
            cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}