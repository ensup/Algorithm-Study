#include <stdio.h>

int main(void)
{
    int rpt;
    int sums = 0;
    scanf("%d", &rpt);
    char nums[100];
    scanf("%s", &nums);
    for (int i = 0; i < rpt; ++i)
        sums += nums[i] - '0';
    printf("%d\n", sums);

    return 0;
}