#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("The size of short is %d bytes.\n", sizeof(short));
	printf("The size of int is %d bytes.\n", sizeof(int));
	printf("The size of long is %d bytes.\n", sizeof(long));
	printf("The size of long long is %d bytes.\n", sizeof(long));
	system("pause");
	return 0;
}
//sizeof 是C语言的一个单目操作符，用来计算不同类型数据所占内存空间的大小，单位是字节。