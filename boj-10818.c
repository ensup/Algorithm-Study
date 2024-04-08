#include <stdio.h>
int main(void) {
    int max;
    int min;
    int sz;
    scanf("%d",&sz);
    int m[sz];
    for(int i=0; i<sz; i++)
    {
        scanf("%d", &m[i]);
    }
    max = m[0];
    min = m[0];
    for (int i = 0; i < sz; i++) {
        max = max < m[i] ? m[i] : max;
        min = min > m[i] ? m[i] : min;
    }

    printf("%d %d\n", min,max);

    return 0;
}
