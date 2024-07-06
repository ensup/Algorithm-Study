#include <stdio.h>
#include <stdlib.h>

typedef struct _coo {
    int x;
    int y;
}coo;

int compare(const void *fst, const void *scd) {
    coo first = *(coo *)fst;
    coo second = *(coo *)scd;
    if (first.y > second.y) {
        return 1;
    }
    else if (first.y < second.y) {
        return -1;
    }
    else {
        if (first.x > second.x)
            return 1;
        else if (first.x < second.x)
            return -1;
        else
            return 0;

    }
}

int main() {
    int repeat_sc;
    coo coord[100000];
    scanf("%d",&repeat_sc);
    for(int i=0;i<repeat_sc;i++)
        scanf("%d %d",&coord[i].x,&coord[i].y);
    qsort(coord,repeat_sc,sizeof(coo),compare);
    for(int j=0;j<repeat_sc;j++)
        printf("%d %d\n",coord[j].x,coord[j].y);
    return 0;
}