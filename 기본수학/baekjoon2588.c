// https://www.acmicpc.net/problem/2588

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int firstNumber, secondNumber;	//세 자리 자연수
	int units, tens, hundreds;	//두 번째 자연수의 각 자리 숫자

	printf("세 자리 자연수 두 개를 입력하시오");
	scanf("%d", &firstNumber);
	scanf("%d", &secondNumber);
	//입력값 받아오기

	hundreds = secondNumber / 100;
	tens = secondNumber / 10 - hundreds * 10;
	units = secondNumber % 10;
	//secondNumber의 각 자리 숫자를 뽑아내기

	printf("%d\n", units * firstNumber);
	printf("%d\n", tens * firstNumber);
	printf("%d\n", hundreds * firstNumber);
	printf("%d\n", secondNumber * firstNumber);
	//각 자리 수 * firstNumber

	return 0;
}