// https://www.acmicpc.net/problem/2438
// 별찍기 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int a, b, i, starAmount;
	scanf("%d", &starAmount);	// 변수 선언, 별 개수 입력 받기


	//for문 사용
	for (i = 0; i < starAmount; i++) {		// 괄호 내부를 입력받은 수만큼 반복시킴
	
		for (a = 0; a <= i; a++) {		// 
			printf("*");
		}
		printf("\n");
	}


	return 0;

}