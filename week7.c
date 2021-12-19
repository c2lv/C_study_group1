/*학번(문자열)을 입력하면 00학번이고, 현역이면 00살이다.
+ stdio.h 말고는 사용할 수 X
<strlen 함수 구현>
(입력) 문자 배열
(return) NULL을 제외한 문자열의 길이
(예외처리)
1. 학번(문자열)이 10자리가 아니면 error -> strlen()
2. 함수의 인자가 여러개가 될 수 있게
3. 00학번부터~21학번까지 처리하도록(학번의 세번째, 네번째 자리 숫자가 00~21까지 아니면 error)
*/

#include <stdio.h>
#define SIZE 100
int ft_strlen(char s[]);

int main(void)
{
    
    char std_Id[SIZE]; // 학번을 입력받을 문자열 선언
    int len; // std_Id의 길이 확인
    char year[3]; // 학번에서 입학 연도 추출
    int std_year; // 입학 연도를 정수형으로 변환  
    int std_age; // 학생 나이 계산

    // 학번 입력 받기
    printf("학번을 입력하시오 : ");
    scanf("%s", std_Id);
    //printf("%s", std_Id);

    // 예외처리 : 학번이 10자리인가?
    len = ft_strlen(std_Id);
    //printf("%d\n", len);
    if (len != 10){
        printf("잘못된 형식입니다. 프로그램을 종료합니다.\n");
        return 0;
    }
    

    // 예외처리 : 00 ~ 21학번 사이인가?
    year[0] = std_Id[2] - '0'; 
    year[1] = std_Id[3] - '0';
    std_year = year[0] * 10 + year[1]; //학번을 정수형으로 전환
    //printf("%d\n", std_year);

    if (std_year > 21){
        printf("계산할 수 없습니다.\n");
        return 0;
    }
    /*
    if (year[0]>= 0 && year[0] <= 2){
        if(year[0] == 2){
            if (year[1] != 0 && year[1] != 1){
                printf("계산할 수 없습니다.\n");
                return 0;
            }  
        }
    } else{
        printf("계산할 수 없습니다.\n");
        return 0;
    }
    */

    // (출력)당신의 학번은 **학번입니다.
    printf("당신의 학번은 %02d학번입니다.\n", std_year);
    //%02d -> 우측정렬로 두칸을 차지하는데, 공간이 비면 0을 출력(두칸까지만)

    // (출력) 당신의 나이는 **살입니다.
    std_age = 41 - std_year;
    printf("당신의 나이는 %d살입니다.\n", std_age);

    return 0;
}

int ft_strlen(char s[])
{
    int len;
    len = 0;
    while(s[len] != '\0'){
        len++;
    }
    return len;
}