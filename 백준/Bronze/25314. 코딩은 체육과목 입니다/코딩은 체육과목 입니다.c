#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void hyeah(int N)
{
	int i;
	for (i = 0; i < N / 4; i++) {
		printf("long ");
	}
	printf("int");
}

int main(void)
{
	int N;
	scanf("%d", &N);

	hyeah(N);

	return 0;
}