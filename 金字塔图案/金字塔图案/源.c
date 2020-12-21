#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num - i - 1; j++)
            {
                printf(" ");
            }
            int s = 0;
            for (s=0; s < i + 1; s++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}