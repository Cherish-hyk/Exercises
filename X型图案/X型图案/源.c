#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        if (num % 2 == 1)
        {
            int s = num / 2;
            for (int i = 0; i < s; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    printf(" ");

                }
                printf("*");
                for (int h = 0; h < num-2*(i+1); h++)
                {
                    printf(" ");
                }
                printf("*");
                for (int j = 0; j < i; j++)
                {
                    printf(" ");

                }
                printf("\n");
            }
            for (int i = 0; i < s; i++)
            {
                printf(" ");
            }
            printf("*");
            for (int i = 0; i < s; i++)
            {
                printf(" ");
            }
            printf("\n");
            for (int i = 0; i < s ; i++)
            {
                for (int j = 0; j < s - 1-i; j++)
                {
                    printf(" ");
                }
                printf("*");
                for (int h = 0; h < (i + 1) * 2-1; h++)
                {
                    printf(" ");

                }
                printf("*");
                for (int j = 0; j < s - 1 - i; j++)
                {
                    printf(" ");
                }
                printf("\n");
            }
        }
        else
        {
            int s = num / 2;
            for (int i = 0; i < s; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    printf(" ");
                }
                printf("*");
                for (int h = 0; h < (s - 1-i) * 2; h++)
                {
                    printf(" ");
                }
                printf("*");
                for (int j = 0; j < i; j++)
                {
                    printf(" ");
                }
                printf("\n");
            }
            for (int i = 0; i < s; i++)
            {
                for (int j = 0; j < s - 1 - i; j++)
                {
                    printf(" ");
                }
                printf("*");
                for (int h = 0; h < i * 2; h++)
                {
                    printf(" ");
                }
                printf("*");
                for (int j = 0; j < s - 1 - i; j++)
                {
                    printf(" ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}