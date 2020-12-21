#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num - i; j++)
            {
                printf(" ");
            }
            int s = 0;
            for (s = 0; s < i + 1; s++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (int i = 0; i <= num; i++)
        {
            printf("* ");
        }
        printf("\n");
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                printf(" ");
            }
            for (int s = 0; s < num - i; s++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}