#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char ch = 0;
    int num = 0;
    char arr[10] = { 'A','a','E','e','I','i','O','o','U','u' };
    while (scanf("%c", &ch) != EOF)
    {
        for (int i = 0; i < 10; i++)
        {
            if (ch == arr[i])
            {
                num = 1;
                break;
            }
        }
        if (num == 1)
        {
            printf("Vowel\n");
            num = 0;
        }
        else
            printf("Consonant\n");
        getchar();
    }
    return 0;
}