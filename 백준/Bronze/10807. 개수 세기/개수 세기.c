#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, v;
	int count = 0;
	scanf("%d", &N);

	int *A = (int *)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	scanf("%d", &v);

	for (int i = 0; i < N; i++) {
		if (A[i] == v) count++;
	}

	free(A);

	printf("%d", count);

	return 0;
}