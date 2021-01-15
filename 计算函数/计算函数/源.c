#define _CRT_SECURE_NO_WARNINGS 1
//题目描述
//小乐乐学会了自定义函数，BoBo老师给他出了个问题，根据以下公式计算m的值。
//
//其中 max3函数为计算三个数的最大值，如： max3(1, 2, 3) 返回结果为3。
//输入描述 :
//一行，输入三个整数，用空格隔开，分别表示a, b, c。
//输出描述 :
//一行，一个浮点数，小数点保留2位，为计算后m的值。
#include<stdio.h>
int max3(int a, int b, int c)
{
    int max = 0;
    if (a > max)
        max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}
int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d%d%d", &a, &b, &c);
    float m = 0;
    m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c));
    printf("%.2f\n", m);
    return 0;
}