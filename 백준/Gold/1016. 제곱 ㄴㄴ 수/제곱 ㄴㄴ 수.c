#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
int check(long long int min, long long int max) {

   int num_of_check = 0;
   int flag;

   for (long long int i = min; i <= max; i++) {
	  flag = 0;
	  for (long long int j = 2; j * j <= i; j++) {
		 if (i % (j * j) == 0) {
			flag = 1;
			break;
		 }
	  }
	  if (flag == 0) num_of_check++;
   }
   return num_of_check;
}
*/
int main(void)
{
	long long int min, max;
	scanf("%lld %lld", &min, &max);

	long long int N = max - min + 1;

	// 배열 A를 만들고, 모두 0으로 초기화
	int *A = (int *)malloc((N) * sizeof(int));
	for (int i = 0; i < N; i++) {
		A[i] = 0;
	}

	// 제곱수 찾아서 1로 표시
	for (long long int i = 2; i * i <= max; i++) {
		long long int sqr = i * i;
		long long int start = (min / sqr) * sqr;
		if (start < min) start += sqr;

		for (long long int j = start; j <= max; j += sqr) {
			A[j - min] = 1;
		}
	}

	// 제곱ㄴㄴ수 개수 찾기
	int num_of_check = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] == 0) num_of_check++;
	}

	printf("%d", num_of_check);

	free(A);

	return 0;
}