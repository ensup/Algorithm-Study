#include <stdio.h>
int main(void) {
	int num1, num2,yak,gong;
	scanf("%d %d", &num1, &num2);
	if (num1 < num2) 
	{
		int tmp;
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}

	for (int i = 1; i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
			yak = i;
	}
	gong = num1 * (num2 / yak);
	printf("%d\n%d\n", yak, gong);

}