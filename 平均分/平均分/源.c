#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int arr[7] = { 0 };
    int max = 0;
    int mix = 0;
    int i = 0;
    double sum = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    mix = arr[0];
    for (i = 1; i < sz; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < mix)
            mix = arr[i];
    }
    for (i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    sum -= (max + mix);
    sum /= (sz - 2);
    printf("%.2lf", sum);
    return 0;
}