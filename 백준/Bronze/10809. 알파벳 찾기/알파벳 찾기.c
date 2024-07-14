#include <stdio.h>
#include <string.h>
int get_str(char ch[]){
    scanf("%s",ch);
    return strlen(ch);
}
int alpha_checker(char alpha,int *len,char ch[]) { //문자열에서 알파벳 위치 체크
    for(int j=0;j<*len;j++) {
        if(ch[j] == alpha) {
            return j;
        }
    }
    return -1;

}
void string_checker(char ch[],int *len){ //알파벳 a~z까지 체크
    for(int i=0;i<26;i++) {
        printf("%d ",alpha_checker('a'+i,len,ch));
    }
}
int main() {
    char string[105];
    int len;
    len = get_str(string); //문자열 입력받기
    string_checker(string,&len); //문자열 확인하기

}