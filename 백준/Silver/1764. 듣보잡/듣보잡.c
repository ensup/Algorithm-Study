#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(char fst[],char scd[]) {
    return strcmp(fst,scd);
}
int main(void) {
    int N,M,nm,count=0;
    scanf("%d%d",&N,&M);
    nm = N+M;
    int target_index_list[nm];
    char cant_hear_n_listen[nm][21];
    for(int i=0;i<nm;i++)
        scanf("%s",cant_hear_n_listen[i]);
    qsort(cant_hear_n_listen,nm,21,compare);
    for(int you=0;you<nm-1;you++) {
        if(strcmp(cant_hear_n_listen[you],cant_hear_n_listen[you+1]) == 0) {
            target_index_list[count] = you;
            count++;
        }
    }
    printf("%d\n",count);
    for(int we=0;we<count;we++)
        printf("%s\n",cant_hear_n_listen[target_index_list[we]]);
    return 0;
}
