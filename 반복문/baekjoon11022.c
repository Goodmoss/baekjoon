// https://www.acmicpc.net/problem/11022
// A + B ����ϴ� ����
// Case #x: A + B = C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int userNum;	// �׽�Ʈ ���̽��� ����
	int firstNum;	// ���� ���� 1
	int secondNum;	// ���� ���� 2
	int i = 0;

	scanf("%d", &userNum);

	for (i = 1; i <= userNum; i++)
	{
		scanf("%d %d", &firstNum, &secondNum);
		printf("Case #%d: %d + %d = %d\n", i, firstNum, secondNum, firstNum + secondNum);
	}

	return 0;
}