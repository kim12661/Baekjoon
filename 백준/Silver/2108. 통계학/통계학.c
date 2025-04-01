#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
void Line_UP(int *A, int N) {
	int i, j, temp;
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (A[i] > A[j]) {
				temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
	}
}
*/

int Get_Arthmetic_Mean(int *A, int N) {

	int sum = 0;
	float mean;

	for (int i = 0; i < N; i++) {
		sum += A[i];
	}

	mean = (float)sum / N;
	mean = (mean >= 0) ? (int)(mean + 0.5) : (int)(mean - 0.5);

	return (int)mean;
}

int Get_Median_Value(int *A, int N) {

	return A[(N - 1) / 2];

}

int Get_Mode(int *A, int N) {

	int B[8001] = { 0 };
	int flag = 0;
	int max = 0;
	int Mode = 0;

	for (int i = 0; i < N; i++) {
		B[A[i]+4000] += 1;
	}

	for (int i = 0; i <= 8000; i++) {
		if (B[i] > max) {
			max = B[i];
		}
	}

	for (int i = 0; i <= 8000; i++) {
		if (B[i] == max) {
			flag += 1;
			Mode = i - 4000;
			if (flag == 2) return Mode;
		}
	}
	return Mode;
}

int Get_Range(int *A, int N) {
	return A[N - 1] - A[0];
}

int compare(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int main(void) {

	int N;

	scanf("%d", &N);

	int *A = (int *)malloc(N * sizeof(int));

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	qsort(A, N, sizeof(int), compare);
	//Line_UP(A, N);
	printf("%d\n", Get_Arthmetic_Mean(A, N));
	printf("%d\n", Get_Median_Value(A, N));
	printf("%d\n", Get_Mode(A, N));
	printf("%d\n", Get_Range(A, N));

	free(A);

	return 0;

}

