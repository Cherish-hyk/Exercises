#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    /*int num = 0;
    int year = 0;
    int mouth = 0;
    int date = 0;
    scanf("%d", &num);
    date = num % 100;
    mouth = num / 100 % 100;
    year = num / 10000;
    printf("year=%d\n", year);
    if (mouth >= 10)
    {
        printf("month=%2d\n", mouth);
    }
    else
    {
        printf("month=0%d\n", mouth);
    }
    if (date >= 10)
    {
        printf("date=%2d\n", date);
    }
    else
    {
        printf("date=0%d\n", date);
    }*/
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%4d%2d%2d", &year, &month, &date);//%4d就是读取4位整数
    printf("year=%d\n", year);
    printf("month=%02d\n", month);//输出不够2位时，左边拿0填充
    printf("date=%02d\n", date);

    return 0;
}