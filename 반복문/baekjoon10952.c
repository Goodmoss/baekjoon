// https://www.acmicpc.net/problem/10952
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.


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