#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", (ch + 32));
		getchar();//��������\n�ַ�
	}
	system("pause");
	return 0;
}