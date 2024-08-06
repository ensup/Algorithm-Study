#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[1005], ch2[1005];
    int len1,len2;
    scanf("%s",ch1);
    scanf("%s",ch2);
    len1 = strlen(ch1);
    len2 = strlen(ch2);
    if(len1>=len2)
        puts("go");
    else
        puts("no");

    return 0;
}