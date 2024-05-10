//https://edu-coding.tistory.com/268
#include <stdio.h>
#include <string.h>
int main(){
    char key[27];
    char str[100];
    char dec[100];
    int len;
    scanf("%s", &key);
    getchar();
    gets(str);
    len = strlen(str);
    for (int i = 0; i < 100; i++) {
        int k;
        if (str[i] >= 97 && str[i] <= 122) {
            k = str[i] - 97;
            dec[i] = key[k];
        }
        else if (str[i] >= 65 && str[i] <= 90) {
            k = str[i] - 65;
            dec[i] = key[k] - 32;
        }
        else
            dec[i] = str[i];
    }
    for (int i = 0; i < len; i++)
        printf("%c", dec[i]);
    printf("\n");
    return 0;
}
