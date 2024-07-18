#include <stdio.h>

void get_arr(int arr[]) {
    for(int i=0;i<8;i++)
        scanf("%d",&arr[i]);
}
int is_ascending(int arr[]) {
    int key=1;
    for(int i=0;i<8;i++)
        if(arr[i] != i+1)
            key = 0;
    if(key)
        return 1;
    else
        return 0;
}
int is_descending(int arr[]) {
    int key=1;
    for(int i=0;i<8;i++)
        if(arr[i] != 8-i)
            key = 0;
    if(key)
        return 1;
    else
        return 0;
}
void checker(int arr[]) {
    if(is_ascending(arr))
        puts("ascending");
    else if(is_descending(arr))
        puts("descending");
    else
        puts("mixed");
}

int main(void) {
    int arr[8];
    get_arr(arr);
    checker(arr);

    return 0;
}