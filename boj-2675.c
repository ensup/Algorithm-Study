//https://www.acmicpc.net/problem/2675
//https://www.acmicpc.net/source/76232196
#include <stdio.h>
#include <string.h>
int main(void) {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int b;
		char str[20];
		scanf("%d %s", &b, &str);
        int length = strlen(str);
		for (int mte = 0; mte < length; mte++) {
			for (int j = 0; j < b; j++)
				printf("%c", str[mte]);
		}
		printf("\n");
	}
}