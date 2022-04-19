// https://www.acmicpc.net/problem/2562
// 최댓값 (1차원 배열) 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int i;			// 반복문
	int number[9] = { 0, };	// 1차원 배열
	int standard = 0;		// 최대
	int order = 0;			// 순서

	for (i = 0; i < 9; i++)	// 숫자 입력받는 반복문(9번)
	{
		scanf("%d", &number[i]);
	}

	for (i = 0; i < 9; i++)	// 비교 반복문
	{
		if (standard < number[i])
		{
			standard = number[i];
			order = i;
		}
	}

	printf("%d\n", standard);
	printf("%d", order+1); 

	return 0;
}