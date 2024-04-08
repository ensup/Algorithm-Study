#include <stdio.h>
int main(void) {
	int a;
	scanf("%d", &a);
	for (int i = 0; i <= a; i++) {
		for (int x = 0; x < i; x++)
			printf(" ");
		for (int y = 0; y < (a-i); y++)
			printf("*");
		printf("\n");
	}

	return 0;
}
