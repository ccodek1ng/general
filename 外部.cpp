#define _CRT_SECURE_NO_WARNINGS 1

int glbal = 789;
static int s = 1;//static ����ȫ�ֱ��� -->��̬ȫ�ֱ���   ������������Դ�ļ��ڲ�
static int add(int x, int y)//static �ı亯����������  �ⲿ���� -->�ڲ�����
{
	int z = x + y;
	return z;
}
