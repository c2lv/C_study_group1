#include <stdio.h>
#include <unistd.h>
int ft_strlen(char s[]);

// *argc(매개변수의 개수 + 1), **argv(매개변수의 값 + 1), **envp(환경변수의 값)
int main(int argc, char **argv, char **envp)
{
    // printf("%d\n", argc);

    // for (int i = 0; i < argc; i++){
    //     printf("%s\n", *argv);
    //     argv++;
    // }

    // for (int i = 0; i < 10; i++){
    //     printf("%s\n", *envp);
    //     envp++;
    // }

// ./a.out arg1 arg2 arg3 arg4를 터미널에 입력했을 때 :
// 5
// ./a.out
// arg1
// arg2
// arg3
// arg4
// SHELL=/bin/bash
// COLORTERM=truecolor
// TERM_PROGRAM_VERSION=1.62.2
// WSL_DISTRO_NAME=Ubuntu-20.04
// NAME=DESKTOP-DIFSEUR
// PWD=/home/taehee/Farm_C_tutoring
// LOGNAME=taehee
// VSCODE_GIT_ASKPASS_NODE=/home/taehee/.vscode-server/bin/3a6960b964327f0e3882ce18fcebd07ed191b316/node
// HOME=/home/taehee
// LANG=C.UTF-8

    char *std_Id; // 학번을 입력받을 문자열 선언
    int len; // std_Id의 길이 확인
    char year[3]; // 학번에서 입학 연도 추출
    int std_year; // 입학 연도를 정수형으로 변환  
    int std_age; // 학생 나이 계산

    // 프로그램에서 학번을 하나만 입력받을 수 있도록 함
    if (argc == 1){
        printf("학번을 입력해주세요\n");
        // printf("usage : ./a.out <학번10자리>\n");
        write(2, "usage : ./a.out <학번>\n", 25); // 표준 에러로 25byte 문자열(2번째 파라미터) 출력
    }
    if (argc > 2){
        printf("학번은 하나만 입력하세요.\n");
        return 0;
    }

    // 학번 입력 받기
    // printf("학번을 입력하시오 : ");
    // scanf("%s", std_Id);
    //printf("%s", std_Id);
    std_Id = argv[1];

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