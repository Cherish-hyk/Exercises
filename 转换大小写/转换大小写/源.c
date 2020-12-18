#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
            printf("%c\n", (ch + 32));
        else
            printf("%c\n", (ch - 32));
        getchar();
    }
    return 0;
}