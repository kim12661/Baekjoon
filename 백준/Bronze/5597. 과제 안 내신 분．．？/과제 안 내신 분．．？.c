#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, come;
	int *A = (int *)malloc((30) * sizeof(int));

	for (int i = 0; i < 30; i++) {
		A[i] = i + 1;
	}

	for (int i = 0; i < 28; i++) {
		scanf("%d", &come);
		A[come - 1] = 0;
	}

	for (int i = 0; i < 30; i++) {
		if(A[i] != 0) printf("%d\n", A[i]);
	}

	free(A);

	return 0;
}