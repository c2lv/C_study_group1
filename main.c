// �� �� �ּ�
/*
���� �� �ּ�
*/
#include <stdio.h> // printf(), scanf()�� ������ �ִ� �ҽ� ����

int add(int n1, int n2); // main()���� add()�� ����� �� �ֵ��� ����

int c; // ���� ����(global variable)
int	main(void) // �Լ� ����(function prototype)
{
	int a; // ���� ����(local variable)
	int b;
	int c;
	int d;

	// scanf(_s)()�� ���������� �Է¹��� ���� ������ ������
	c = scanf_s("%d %d %d", &a, &b, &d);
	/* ���⼭ &�� a�� b�� �ּҸ� ��Ÿ��
	(scanf()���� �ʱ�ȭ�� ���� a�� b�� ��� �ִ��� �˷���) */
	printf("%d + %d = %d\nscanf()_s's return is %d", 
		a, b, add(a, b), c); // ���⼭ 1, 2�� ����(argument)
	// \n: ���๮��(�� ���ڸ� ���� ���� �ٷ� �Ѿ)
	return 0;
	/*int a;

	a = printf("Hello %s!", "World"); // printf() ȣ��
	printf("%d", a); // printf()�� ���������� ����� ���� ���� ����(not included null)

	// �����
	int a; // ���� ����
	int b = 2; // ���� ����� �ʱ�ȭ
	a = 1; // a�� 2�� �Ҵ�, a�� 2�� ����, ���� �ʱ�ȭ(init)

	// ������*/
}

// n1, n2��� �Ű� ����(parameter)�� ���� ���� �����ϴ� �Լ�
int add(int n1, int n2)
{
	return (n1 + n2);
}

/* cf.
<unistd.h>���� write()�̶�� �Լ��� �־��.
write()�� �Ű� �������� fd, char *, length
fd(file descriptor) ���� 0: ǥ�� �Է�, 1: ǥ�� ���, 2: ǥ�� ����
char *���� ����� ���ڿ�, length�� ����� ���� ���� ����.
ex) write(1, "Hello world!", 3); -> ǥ�� ������� "Hel" ���.
*/