#include <stdio.h>

int main(void) {
    int chess[6], correct[] = { 1,1,2,2,2,8 };
    for (int i = 0; i < 6; i++)
        scanf("%d", &chess[i]);
    for (int i = 0; i < 6; i++)
        printf("%d ", correct[i] - chess[i]);
    return 0;
}
