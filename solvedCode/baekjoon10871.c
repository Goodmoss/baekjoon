// https://www.acmicpc.net/problem/10871
// X보다 작은 수 출력


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n;
	int compare;
	int largeNum;

	scanf("%d %d", &n, &largeNum);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &compare);
		if (largeNum > compare)
		{
			printf("%d ", compare);
		}
	}

	return 0;
}