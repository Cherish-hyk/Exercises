#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����
//С��������ٷ��Ƴɼ������뽫�ɼ�ת���ɵȼ��ơ�ת������Ϊ��90 - 100Ϊ��A����80 - 89Ϊ��B����70 - 79Ϊ��C����60 - 69Ϊ��D����59����Ϊ��E�����������ĳɼ�����0 - 100֮�䣬�����F����
//�������� :
//һ�У�һ��������ʾ�ĳɼ���
//������� :
//һ�У�ת����ĵȼ�
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