//#include <stdio.h>
//#include <stdlib.h> // rand() 함수 포함 라이브러리
//#include <time.h>
//
//int angry = 0; // 분노 게이지
//short first = 1; // 처음으로 tease를 실행하였는가?
//short 놀림감 = 0; // 놀림감인가??
//
//void tease(void)
//{
//	if (first)
//	{
//		srand(time(NULL));
//		int a = rand() % 2;
//		놀림감 = a;
//		printf_s("놀림감: %hd\n", 놀림감);
//		first--;
//	}
//	if (놀림감)
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
//	// 반복문
//	// 핵심: 명확한 조건에 따라 종료되어야 함!
//	// **for, while**, do ~ while
//
//	/*while (조건식)
//	{
//		(실행문);
//	}
//
//	for (초기식; 조건식; 증감식)
//	{
//		실행문;
//	}
//
//	do {
//		실행문;
//	} while (조건식);*/
//
//	// 내가 화(variable)가 날 때까지 친구가 놀릴 수 있음(method)
//	// 만약 화가 머리 끝까지 치솟으면(조건) 화내기(method)
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
//	// 실행 시 성격을 조건으로 해서
//	// 순진하면 놀림감 true, 억세면 놀림감 false
//
//	printf_s("if use do ~ while:\n");
//	do {
//		tease();
//	} while (놀림감 && angry < 10);
//	boom();
//
//	printf_s("if use while:\n");
//	while (놀림감 && angry < 10)
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
	// strlen과 거의 똑같은 동작을 하는 로직 구현
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
	// 매개변수로 문자열을 받아 
	// 맨 뒤 nul 문자(\0)를 제외한 문자열의 길이를 리턴하는 함수
	printf_s("%d", make_strlen(a));

	return 0;
}