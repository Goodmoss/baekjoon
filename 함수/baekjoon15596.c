// https://www.acmicpc.net/problem/15596
// 정수 N개의 합 (함수 작성)
// long long sum(int *a, int n);

// a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열
// (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
// 리턴값: a에 포함되어 있는 정수 n개의 합

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