// https://www.acmicpc.net/problem/1110
// 더하기 사이클

/*
문제 상황
입력값이 1일때 60이 나오는 게 정상인데 1이 튀어나옴
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int firstUsernum;		// 처음에 입력받은 숫자
	int copyUsernum;		// 비교를 위해 입력값을 복사한 변수
	int times = 0;			// 전체 과정을 반복한 횟수
	
	int firstUnit;			// 일의 자리 수 
	int firstTens;			// 십의 자리 수
	int firstAddnum;		// 더한 값
	
	int result;				// 결과값


	scanf("%d", &firstUsernum);		// 숫자 입력받기
	copyUsernum = firstUsernum;		// 반복문 조건 비교를 위해 입력받은 수를 복사해줌

	if (firstUsernum < 10)
		firstUsernum = firstUsernum * 10;
	// '주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들어라' 조건 만족


	// 처음 입력한 수와 결과값이 같아질 때까지 반복함
	// 다르면 반복을 종료하고 반복문이 돌아간 수를 출력함
	do
	{

		firstTens = firstUsernum / 10;			// 입력받은 숫자를 십의 자리 수로 분리
		firstUnit = firstUsernum % 10;			// 입력받은 숫자를 일의 자리 수로 분리
		firstAddnum = firstTens + firstUnit;	// firstAddnum 변수에다가 두 숫자를 더해서 저장
		
		result = firstUnit * 10 + firstAddnum % 10;		
		// 결과 숫자 = 위에서 구한 일의 자리 수*10 + firstAddnum의 일의 자리 수
		
		firstUsernum = result;	// 반복문 계산을 위해 result를 다시 firstUsernum에 넣어줌
		
		times++; // 반복문 돌아간 횟수 카운트


	} while (copyUsernum != result);
	

	printf("%d", times);	// 카운트한 횟수 출력

	return 0;
}



/*
문제 조건 뜯어보기


 먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고,
 각 자리의 숫자를 더한다.
 -> if문 써서 10보다 작은 경우를 나눠줌. 그 경우 숫자에 10을 곱함
 -> 각 자리 숫자를 분해해야함
 -> number(입력받은 숫자) % 10 을 하면 일의자리수 구할 수 있음
 -> number / 10 을 하면 십의자리수 구할 수 있음
 -> 그리고 둘을 더함

 그 다음, 주어진 수의 가장 오른쪽 자리 수와
 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면
 새로운 수를 만들 수 있다.
 -> (주어진 수의 일의 자리 수 * 10) + 구한 합의 일의 자리 수 = 새로운 수

 (새로운 수 = 처음의 수)가 될 때 반복문을 빠져나오게끔 하자
 그리고 반복문이 돌아간 횟수를 출력

*/