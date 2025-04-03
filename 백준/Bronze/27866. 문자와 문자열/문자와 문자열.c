#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char *S = (char *)malloc((10000) * sizeof(char));

	scanf("%s", S);
	scanf("%d", &i);

	printf("%c", S[i - 1]);

	free(S);

	return 0;
}