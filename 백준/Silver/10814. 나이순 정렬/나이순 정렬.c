//https://www.acmicpc.net/problem/10814
#include <stdio.h>
#include <stdlib.h>

typedef struct Age_and_Name {
    int age;
    char name[105];
}AnN;
int compare(const void *fst, const void *scd) {
    AnN *first = (AnN *)fst;
    AnN *second = (AnN *)scd;
    if(first->age>second->age)
        return 1;
    else if(first->age == second->age)
        return 0;
    else
        return -1;
}

int main() {
    int repeat_sc;
    scanf("%d",&repeat_sc);
    AnN members[repeat_sc];
    for(int i=0;i<repeat_sc;i++)
        scanf("%d%s",&members[i].age,members[i].name);
    qsort(members,repeat_sc,sizeof(AnN),compare);
    for(int i=0;i<repeat_sc;i++)
        printf("%d %s\n",members[i].age,members[i].name);

}