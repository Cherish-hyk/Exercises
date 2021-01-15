#define _CRT_SECURE_NO_WARNINGS 1
//题目描述
//小乐乐输入百分制成绩，他想将成绩转换成等级制。转换规则为：90 - 100为’A’，80 - 89为’B’，70 - 79为’C’，60 - 69为’D’，59以下为’E’。如果输入的成绩不在0 - 100之间，输出’F’。
//输入描述 :
//一行，一个整数表示的成绩。
//输出描述 :
//一行，转换后的等级
#include  <stdio.h>
int main()
{
    int s = 0;
    scanf("%d", &s);
    if (s <= 100 && s >= 90) {
        printf("A\n");
    }
    else if (s <= 89 && s >= 80) {
        printf("B\n");
    }
    else if (s <= 79 && s >= 70) {
        printf("C\n");
    }
    else if (s <= 69 && s >= 60) {
        printf("D\n");
    }
    else if (s > 100 || s < 0) {
        printf("F\n");
    }
    else {
        printf("E\n");
    }
    return 0;
}