#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        for (int i = 0; i < num; i++)
        {
            printf("* ");
        }
        printf("\n");
        for (int i = 0; i < num - 2; i++)
        {
            printf("*");
            for (int j = 0; j < (num-2)*2+1; j++)
            {
                printf(" ");
            }
            printf("* \n");
        }
        for (int i = 0; i < num; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}