// 입영대상자 검사 (지원서 접수년도 기준 18세이상 28세이하 (24년 기준: 1996.1.1. ~ 2006.12.31. 출생자)
    
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("********************\n");
    printf("* 202404002 강지수 *\n");
    printf("********************\n\n");

    int year; // 변수를 선언한다.
    printf(" 태어난 해: "); // 태어난 해를 입력하라는 문구를 출력한다.
    scanf(" %d", &year);

    if (1996 <= year && year <= 2006) // 1996년 이후 2006년 이전이면 아래 문장을 실행한다.
        printf("\n 입영대상자 입니다. \n");

    else if (0 <= year && year <= 1995) // 1996년 이전이면 아래 문장을 실행한다.
        printf("\n 입영대상자가 아닙니다. \n");

    else if (2007 <= year && year <= 2024) // 2024년 이후이면 아래 문장을 실행한다.
        printf("\n 입영대상자가 아닙니다. \n");

    else // 0년 이전이거나 2024년 이후이면 아래 문장을 실행한다.
        printf("\n 잘못 입력하였습니다. \n");

    return 0;

}
