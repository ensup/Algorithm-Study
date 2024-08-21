#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char alpha[55];
}name;
int compare(const name *fst, const name *scd) {
    int len_fst,len_scd;
    len_fst = strlen(fst->alpha);
    len_scd = strlen(scd->alpha);
    if(len_fst > len_scd)
        return 1;
    else if(len_fst < len_scd)
        return -1;
    else {
        return strcmp(fst->alpha,scd->alpha);
    }
}
int main(void) {
    int N;
    scanf("%d",&N);
    name names[N];
    for(int i=0;i<N;i++)
        scanf("%s",names[i].alpha);
    qsort(names,N,sizeof(name),compare);
    for(int i=0;i<N;i++) {
        if(strcmp(names[i].alpha,names[i+1].alpha))
            printf("%s\n",names[i].alpha);
    }
    return 0;
}
