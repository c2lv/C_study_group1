//#include <stdio.h>
//#include <stdlib.h> // rand() �Լ� ���� ���̺귯��
//#include <time.h>
//
//int angry = 0; // �г� ������
//short first = 1; // ó������ tease�� �����Ͽ��°�?
//short ��� = 0; // ����ΰ�??
//
//void tease(void)
//{
//	if (first)
//	{
//		srand(time(NULL));
//		int a = rand() % 2;
//		��� = a;
//		printf_s("���: %hd\n", ���);
//		first--;
//	}
//	if (���)
//	{
//		angry++;
//		printf_s("my angry gage is %d\n", angry);
//	}
//}
//
//void boom(void)
//{
//	printf_s("STOP!!!!!!!!!!!!!!!!!!\n\n");
//	angry = 0;
//	first = 0;
//}
//
//int main(void)
//{
//	// �ݺ���
//	// �ٽ�: ��Ȯ�� ���ǿ� ���� ����Ǿ�� ��!
//	// **for, while**, do ~ while
//
//	/*while (���ǽ�)
//	{
//		(���๮);
//	}
//
//	for (�ʱ��; ���ǽ�; ������)
//	{
//		���๮;
//	}
//
//	do {
//		���๮;
//	} while (���ǽ�);*/
//
//	// ���� ȭ(variable)�� �� ������ ģ���� � �� ����(method)
//	// ���� ȭ�� �Ӹ� ������ ġ������(����) ȭ����(method)
//
//	/*while (angry < 100)
//	{
//		tease();
//	}
//	boom();*/
//
//	/*for (int i = 0; i < 100; i++)
//	{
//		tease();
//	}
//	boom();*/
//
//	/*do {
//		tease();
//	} while (angry < 100);
//	boom();*/
//
//	// ���� �� ������ �������� �ؼ�
//	// �����ϸ� ��� true, �＼�� ��� false
//
//	printf_s("if use do ~ while:\n");
//	do {
//		tease();
//	} while (��� && angry < 10);
//	boom();
//
//	printf_s("if use while:\n");
//	while (��� && angry < 10)
//	{
//		tease();
//	}
//	boom();
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <string.h> // strlen()

int make_strlen(char a[])
{
	// strlen�� ���� �Ȱ��� ������ �ϴ� ���� ����
	int cnt = 0;

	while (a[cnt] != '\0')
		cnt++;
	return cnt;
}

int main(void)
{
	char a[100] = {0,};
	scanf("%s", a);

	// strlen():
	// �Ű������� ���ڿ��� �޾� 
	// �� �� nul ����(\0)�� ������ ���ڿ��� ���̸� �����ϴ� �Լ�
	printf_s("%d", make_strlen(a));

	return 0;
}