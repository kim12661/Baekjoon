#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	int h, m;
	h = C / 60;
	m = C % 60;

	if (B + m >= 60) {
		B = B + m - 60;
		A += 1;
	}
	else B = B + m;

	A = (A + h >= 24) ? A + h - 24 : A + h;

	printf("%d %d", A, B);

	return 0;
}