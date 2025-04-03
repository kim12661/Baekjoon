#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, M, i, j;
	int temp;
	scanf("%d %d", &N, &M);

	int *A = (int *)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		A[i] = i + 1;
	}

	for (int a = 0; a < M; a++) {
		scanf("%d %d", &i, &j);
		temp = A[i - 1];
		A[i - 1] = A[j - 1];
		A[j - 1] = temp;
	}

	for (int b = 0; b < N; b++) {
		printf("%d ", A[b]);
	}

	free(A);

	return 0;
}