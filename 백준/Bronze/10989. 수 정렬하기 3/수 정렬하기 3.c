#include <stdio.h>

int main(void) {
    int rpt,tmp;
    int list[10001] = { 0 };
    scanf("%d", &rpt);
    for (int i = 0; i < rpt; i++) {
        scanf("%d", &tmp);
        list[tmp]++;
    }
    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < list[i]; j++)
            printf("%d\n", i);
    }
}
