#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����
//KiKi֪����ʲô��������ֻ�ܱ�1����������������������������֪��������λ�����У��ж��ٸ�������
//�������� :
//��
//������� :
//һ�У�һ����������ʾ������λ�����У��ж��ٸ�������
#include<stdio.h>
#include<math.h>
int main()
{
	int count = 900;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				count--;
				break;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}