// https://www.acmicpc.net/problem/10952
// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;

	while (1) 
	{
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0) 
		{
			break;
		}
		else 
		{
			printf("%d\n", a + b);
		}
		
	}

	return 0;
}