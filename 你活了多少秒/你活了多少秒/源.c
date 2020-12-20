#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int age = 0;
    long int s = 0;
    scanf("%d", &age);
    s = 3.156e7 * age;
    printf("%ld", s);
    return 0;
}