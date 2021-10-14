// 한 줄 주석
/*
여러 줄 주석
*/
#include <stdio.h> // printf(), scanf()를 가지고 있는 소스 파일

int add(int n1, int n2); // main()에서 add()가 실행될 수 있도록 선언

int c; // 전역 변수(global variable)
int	main(void) // 함수 원형(function prototype)
{
	int a; // 지역 변수(local variable)
	int b;
	int c;
	int d;

	// scanf(_s)()는 성공적으로 입력받은 값의 개수를 리턴함
	c = scanf_s("%d %d %d", &a, &b, &d);
	/* 여기서 &는 a와 b의 주소를 나타냄
	(scanf()에게 초기화를 해줄 a와 b가 어디에 있는지 알려줌) */
	printf("%d + %d = %d\nscanf()_s's return is %d", 
		a, b, add(a, b), c); // 여기서 1, 2는 인자(argument)
	// \n: 개행문자(이 문자를 쓰면 다음 줄로 넘어감)
	return 0;
	/*int a;

	a = printf("Hello %s!", "World"); // printf() 호출
	printf("%d", a); // printf()는 성공적으로 출력한 문자 수를 리턴(not included null)

	// 선언부
	int a; // 변수 선언
	int b = 2; // 변수 선언과 초기화
	a = 1; // a에 2를 할당, a에 2를 대입, 변수 초기화(init)

	// 구현부*/
}

// n1, n2라는 매개 변수(parameter)를 더한 값을 리턴하는 함수
int add(int n1, int n2)
{
	return (n1 + n2);
}

/* cf.
<unistd.h>에는 write()이라는 함수가 있어요.
write()의 매개 변수에는 fd, char *, length
fd(file descriptor) 값은 0: 표준 입력, 1: 표준 출력, 2: 표준 에러
char *에는 출력할 문자열, length는 출력할 문자 수를 뜻함.
ex) write(1, "Hello world!", 3); -> 표준 출력으로 "Hel" 출력.
*/