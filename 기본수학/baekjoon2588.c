// https://www.acmicpc.net/problem/2588

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int firstNumber, secondNumber;	//�� �ڸ� �ڿ���
	int units, tens, hundreds;	//�� ��° �ڿ����� �� �ڸ� ����

	printf("�� �ڸ� �ڿ��� �� ���� �Է��Ͻÿ�");
	scanf("%d", &firstNumber);
	scanf("%d", &secondNumber);
	//�Է°� �޾ƿ���

	hundreds = secondNumber / 100;
	tens = secondNumber / 10 - hundreds * 10;
	units = secondNumber % 10;
	//secondNumber�� �� �ڸ� ���ڸ� �̾Ƴ���

	printf("%d\n", units * firstNumber);
	printf("%d\n", tens * firstNumber);
	printf("%d\n", hundreds * firstNumber);
	printf("%d\n", secondNumber * firstNumber);
	//�� �ڸ� �� * firstNumber

	return 0;
}