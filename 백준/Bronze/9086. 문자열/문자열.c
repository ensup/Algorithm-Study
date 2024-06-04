#include <stdio.h>
#include <string.h>
int main(void) {
	int reepeate;
	scanf("%d", &reepeate);
	for (int i = 0; i < reepeate; i++) {
		char mung[1000];
		scanf("%s", &mung);
		printf("%c%c\n", mung[0], mung[strlen(mung)-1]);
	}

	return 0;
}