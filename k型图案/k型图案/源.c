#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        for (int i = 0; i <= num; i++)
        {
            for (int j = 0; j <= num-i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < i+2; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}