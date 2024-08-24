#include <stdio.h>
#include <string.h>
int main(void) {
    int N,len;
    char ints[21];
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%s",ints);
        len = strlen(ints);
        if(len>5 && len<10)
            puts("yes"); //Nein!
        else
            puts("no"); //Ja!
    }
    return 0;
}
