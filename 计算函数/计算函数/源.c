#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����
//С����ѧ�����Զ��庯����BoBo��ʦ�������˸����⣬�������¹�ʽ����m��ֵ��
//
//���� max3����Ϊ���������������ֵ���磺 max3(1, 2, 3) ���ؽ��Ϊ3��
//�������� :
//һ�У����������������ÿո�������ֱ��ʾa, b, c��
//������� :
//һ�У�һ����������С���㱣��2λ��Ϊ�����m��ֵ��
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