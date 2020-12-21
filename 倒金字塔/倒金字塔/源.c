#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (int s = 0; s < num-i; s++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}