#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {
	int rpt1=0;
	scanf("%d", &rpt1);
	for (int i = 1; i <= rpt1; i++) {
		int num1 = 0;
		int num2 = 0;
		scanf("%d %d", &num1,&num2);
		printf("Case #%d: %d\n", i, num1+num2);
	}
	return 0;
}