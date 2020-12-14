#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", (ch + 32));
		getchar();//处理多余的\n字符
	}
	system("pause");
	return 0;
}