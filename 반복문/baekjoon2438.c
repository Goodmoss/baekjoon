// https://www.acmicpc.net/problem/2438
// ����� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int a, b, i, starAmount;
	scanf("%d", &starAmount);	// ���� ����, �� ���� �Է� �ޱ�


	//for�� ���
	for (i = 0; i < starAmount; i++) {		// ��ȣ ���θ� �Է¹��� ����ŭ �ݺ���Ŵ
	
		for (a = 0; a <= i; a++) {		// 
			printf("*");
		}
		printf("\n");
	}


	return 0;

}