// https://www.acmicpc.net/problem/2439
// ����� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;		// �ݺ��� ����
	int userNum;	// ����� Ƚ��

	scanf("%d", &userNum);

	for (i = 0; i < userNum; i++)
	{

		for (i = 0; i < userNum; i++) 
		{

			for (j = (userNum-1); j > i; j--) 
				printf(" ");

			for (j = 0; j <= i; j++) 
				printf("*");
			
			printf("\n");
		}

	}

	return 0;
}


/*
		for (j = userNum; j <= i; j++)
			printf(" ");

		for (k = userNum; k <= i; k++)
			printf("*");

		printf("\n");
		*/