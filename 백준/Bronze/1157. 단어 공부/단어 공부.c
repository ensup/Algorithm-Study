#include <stdio.h>
#include <string.h>
char ch[1000000];
int alpha[27]={0};
int len;
void which_alpha(int ipt){
    if(ch[ipt]>='a' && ch[ipt]<='z')
        ch[ipt]-=32;
    alpha[ch[ipt]-65]++;
}
char most_alpha(void) {
    int max = 0;
    int most_frequent;
    int double_max=0;
    for (int i = 0; i < 26; i++) {
        if (max < alpha[i]) {
            max = alpha[i];
            most_frequent = i;
        }

    }
    for (int i = 0; i < 26; i++){
        if(alpha[i]==max)
            double_max++;
    }
    if(double_max>1)
        return '?';
    else
        return (most_frequent+65);
}
int main(void) {
    int len;
    scanf("%s",&ch);
    len=strlen(ch);
    for(int i=0;i<len;i++)
        which_alpha(i);
    printf("%c\n",most_alpha());
    return 0;
}
