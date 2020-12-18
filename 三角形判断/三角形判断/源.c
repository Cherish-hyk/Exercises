#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int a, int b, int c)
{
    int max = 0;
    if (a > b)
        max = a;
    else
        max = b;
    if (max < c)
        max = c;
    return max;
}
int triangle(int a, int b, int c, int max)
{
    if (a == max && a + b > max)
        return 1;
    else if (b == max && a + c > max)
        return 1;
    else if (c == max && a + b > max)
        return 1;
    else
        return 0;
}
void HowTriangle(int a, int b, int c)
{
    if (a == b&&b == c)
        printf("Equilateral triangle!\n");
    else if(a == b || a == c || b == c)
        printf("Isosceles triangle!\n");
    else
    printf("Ordinary triangle!\n");
}
int main()
{
    int a = 0, b = 0, c = 0;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        int max = Max(a, b, c);
        int ret = triangle(a, b, c, max);
        if (ret == 0)
            printf("Not a triangle!\n");
        else
            HowTriangle(a, b, c);
    }
    return 0;
}