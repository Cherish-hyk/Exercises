#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	//b = a % 10 * 1000 + a / 10 % 10 * 100 + a / 100 % 10 * 10 + a / 1000 % 10;
//	printf("%d\n", b);
	while (a)
	{
		printf("%d", a % 10);
		a /= 10;
	}
	printf("\n");
	system("pause");
	return 0;
}