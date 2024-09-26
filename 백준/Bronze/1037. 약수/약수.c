//https://www.acmicpc.net/problem/1037
#include <stdio.h>
#include <stdlib.h>
int finder(int* arr, int len, int key) { //key => max: 1, min: -1
	int res = 0;
	for (int i = 0; i < len; i++)
		if (arr[res] * key < arr[i] * key)
			res = i;
	return res;
}
int main(void) {
	int num, * divs, max, min;
	scanf("%d", &num);
	divs = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++)
		scanf("%d", &divs[i]);
	max = divs[finder(divs, num, 1)];
	min = divs[finder(divs, num, -1)];
	printf("%d\n", max * min);
	free(divs);
	return 0;
}