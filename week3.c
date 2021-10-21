#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// main()의 두 번째 매개변수 argv는 이중포인터로, 입력받는 인자를 문자열로 담고 인덱스를 붙인다.
// 0: a.out(실행파일의 이름), 1~: 입력받는 인자 순서대로 저장
int	main(void)
{
	// int a = 10; // int형 변수 a를 선언함과 동시에 값 10을 대입
	// 선언&초기화 형태: (자료형) (변수명) (대입연산자) (값);
	// 초기화 하지 않은 변수, 연속적인 변수의 일부분에는 쓰레기 값이 들어있음.
	// char a[6] = "hello"; // 6 byte: h e l l o \0 문자열 선언 및 할당
	// 배열 선언&초기화 형태: (자료형) (변수명)[(배열의 크기 + 1(null 문자))] ...
	// 값에는 상수, 변수, 수식 모두 대입 가능 ex) int num3 = num1 * num2;

	// 정수 자료형 크기 비교
	// 2 byte short(-32768~32767), 4 byte int(-2147483648~2147483647)
	// 8byte long long (int)
	// unsigned: sign(+, -)이 양수(+)만 존재하는 자료형 ex) unsigned int, unsigned short

	// 제어 문자
	// \n: new line 개행 문자
	// \r: carrige return 맨 앞으로 이동
	// \b: backspace: 왼쪽 이동 ex) hella\b
	// \t: tab: 지정된 크기 만큼 space ex) Cow\rW: Wow, Cow\n\rW: Cow/W
	// \0: null(NULL): 널 문자

	// 변환 문자(%와 함께 오는 문자)
	// sizeof(자료형): 자료형의 바이트 크기를 리턴
	/* printf_s("%d\n", +10); // %d: decimal, 10진 정수
	printf_s("%lf\n", -9.99); // %lf: long float(double, long double), 실수(8바이트)
	printf_s("%s\n", "Hello world"); // %s: string, 문자열(큰 따옴표 사용, ")
	printf_s("%c\n", 'c'); // %c: character, 문자(작은 따옴표 사용, ')
	printf_s("%s\n", "가"); // 유니코드 문자는 1바이트가 아니므로 문자열로 처리!!!*/

	// 예약어와 식별자
	// const: constant(상수), 선언과 동시에 "꼭" 초기화 해주어야 함, 이후 수정 절대 불가!! 
	// ex) const int ten = 10;
	// const int nine; // 상수 예약어 사용 시 선언 따로 하면 후에 초기화 불가능
	// nine = 9; // error: 초기화 별도로 이루어질 수 없음
	const int nine = 9; // 선언과 초기화를 동시에 해주어야 함.
	printf("%d", nine);

	// 예약어: 컴파일러와 사용 방법이 약속된 언어 ex) return, int, short, for, while, switch... 
	// 식별자: 필요에 따라 만들어 사용하는 단어 ex) 변수명
	// 알파벳 대소문자, 숫자, _(underline, 밑줄)로만 이루어지며, 숫자로 시작할 수 없다.
	// URL과 달리 대소문자를 구분함. 예약어는 식별자로 이용할 수 없다.

	// 연산자
	short a = 3;
	short b = 6;
	// a = a + b; // a = 9
	// a += b; // 더하기 연산 후 대입 연산, 다른 연산자(*, /, -)에도 적용 가능.
	// printf("%hd %hd", b / a, b % a); // %: 나머지 연산자
	// a++; // a=a+1; // 증가 연산자 후위 표기 -> 4
	// a--; // a = a - 1; // 감소 연산자 후위 표기 -> 3
	
	short c = ++a; // 전위 표기, 대입 전 +1 처리
	printf("%hd", c); // 4(++a가 적용 됨)
 	short d = a++; // 후위 표기, 대입 후 +1 처리
	printf("%hd", d); // 4(a++이 적용 안 됨)

	return 0;
}

/*
*: asterisk(애스터리스크): '모든'을 뜻하는 문자
*.exe: exe 확장자를 가진 모든 파일
*/