#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����
//��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�������Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���
//��������:
//ѧ���Լ�3�Ƴɼ���ѧ�źͳɼ�֮����Ӣ�ķֺŸ������ɼ�֮����Ӣ�Ķ��Ÿ�����
//������� :
//ѧ�ţ�3�Ƴɼ��������ʽ������������
#include<stdio.h>
int main()
{
    int a = 0;
    float b = 0.0, c = 0.0, d = 0.0;
    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
    return 0;
}