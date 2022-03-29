// https://www.acmicpc.net/problem/11022
// A + B 출력하는 문제
// Case #x: A + B = C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int userNum;	// 테스트 케이스의 개수
	int firstNum;	// 덧셈 변수 1
	int secondNum;	// 덧셈 변수 2
	int i = 0;

	scanf("%d", &userNum);

	for (i = 1; i <= userNum; i++)
	{
		scanf("%d %d", &firstNum, &secondNum);
		printf("Case #%d: %d + %d = %d\n", i, firstNum, secondNum, firstNum + secondNum);
	}

	return 0;
}