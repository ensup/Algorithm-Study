#include <stdio.h>
#include <string.h>

int main(void) {
    int len,num;
    char nums[333335];
    scanf("%s",nums);
    len = strlen(nums);
    {
        int key=0;
        num=nums[0]-'0';
        if(num/4) {
            printf("1");
            num -= 4;
            key=1;
        }
        if(num/2) {
            printf("1");
            num -= 2;
        }
        else if(key)
            printf("0");
        if(num)
            printf("1");
        else {
            printf("0");
        }
        for(int i=1;i<len;i++) {
            num=nums[i]-'0';
            if(num/4) {
                printf("1");
                num -= 4;
            }
            else
                printf("0");
            if(num/2) {
                printf("1");
                num -= 2;
            }
            else
                printf("0");
            if(num)
                printf("1");
            else {
                printf("0");
            }
        }
    }
    return 0;
}
