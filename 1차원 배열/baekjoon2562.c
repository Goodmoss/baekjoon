// https://www.acmicpc.net/problem/2562
// �ִ� (1���� �迭) 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int i;			// �ݺ���
	int number[9] = { 0, };	// 1���� �迭
	int standard = 0;		// �ִ�
	int order = 0;			// ����

	for (i = 0; i < 9; i++)	// ���� �Է¹޴� �ݺ���(9��)
	{
		scanf("%d", &number[i]);
	}

	for (i = 0; i < 9; i++)	// �� �ݺ���
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