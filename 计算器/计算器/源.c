#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    double a = 0.0, b = 0.0;
    char ch = 0;
    char arr[4] = { "+-*/" };
    while (scanf("%lf%c%lf", &a, &ch, &b) != EOF)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (ch == arr[i])
                count++;
        }
        if (count == 0)
            printf("Invalid operation!\n");
        if (ch == '+')
        {
            printf("%.4lf+%.4lf=%.4lf\n",a,b, (a + b));
        }
        if (ch == '-')
        {
            printf("%.4lf-%.4lf=%.4lf\n", a, b, (a - b));
        }
        if (ch == '*')
        {
            printf("%.4lf*%.4lf=%.4lf\n", a, b, (a * b));
        }
        if (ch == '/')
        {
            if(b==0.0)
            printf("Wrong!Division by zero!\n");
            else
            {
                printf("%.4lf/%.4lf=%.4lf\n", a, b, (a / b));
            }
        }
        getchar();
    }
    return 0;
}