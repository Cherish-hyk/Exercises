#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("    %c    \n", a);
//    printf("   %c %c   \n", a, a);
//    printf("  %c %c %c  \n", a, a, a);
//    printf(" %c %c %c %c \n",a, a, a, a);
//    printf("%c %c %c %c %c\n", a, a, a, a, a);
//    return 0;
//}
#include <stdio.h>
int main()
{
    char ch = 0;
    scanf("%c", &ch);
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        //处理一行
        //空格
        int j = 0;
        for (j = 0; j < 5 - i - 1; j++)
        {
            printf(" ");
        }
        //数字
        for (j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
