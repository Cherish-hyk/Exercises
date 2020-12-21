#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < (num - i) * 2; j++)
            {
                printf(" ");
            }
            for (int h = 0; h < i + 1; h++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (int i = 0; i <= num; i++)
        {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < (i + 1) * 2; j++)
            {
                printf(" ");
            }
            for (int h = 0; h < num - i; h++)
            {
                printf("*");

            }
            printf("\n");
        }
    }
    return 0;
}