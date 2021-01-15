#define _CRT_SECURE_NO_WARNINGS 1
//题目描述
//给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
//输入描述 :
//共3行
//第一行，一个整数，表示n（1 <= n <= 100）。
//第二行，共输入n个整数，两个整数之间用空格分隔。
//第三行，输入一个整数，表示要查找的整数x。
//输出描述 :
//一行，表示整数x出现的次数。
#include<stdio.h>
int main()
{
    int n, i, b;
    int a[101] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b);
        a[b]++;
    }
    scanf("%d", &i);
    printf("%d", a[i]);
    return 0;
}