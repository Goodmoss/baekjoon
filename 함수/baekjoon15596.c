// https://www.acmicpc.net/problem/15596
// ���� N���� �� (�Լ� �ۼ�)
// long long sum(int *a, int n);

// a: ���� ���ؾ� �ϴ� ���� n���� ����Ǿ� �ִ� �迭
// (0 �� a[i] �� 1,000,000, 1 �� n �� 3,000,000)
// ���ϰ�: a�� ���ԵǾ� �ִ� ���� n���� ��

#include <stdio.h>

long long sum(int* a, int n) 
{
	long long count = 0;
	int i = 0;

	for (i = 0; i < n; i++)
	{
		count = count + a[i];
	}

	return count;
}