#include <stdio.h>

int main(void)
{
	int X, N;
	int a[100]; int b[100];
	int sum = 0;
	int i;

	scanf("%d %d", &X, &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}

	for (int j = 0; j < i; j++) {
		sum += a[j] * b[j];
	}

	if (X == sum) printf("Yes");
	else printf("No");

	return 0;
}