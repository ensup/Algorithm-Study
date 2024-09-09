#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int len = strlen(s1);
    for(int i=0;i<len;i++)
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i] += 'a'-'A';
        else if(s1[i]>='a' && s1[i]<='z')
            s1[i] -= 'a'-'A';
        printf("%s\n",s1);

    return 0;
}
