#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int T, i;
	int j = 0;
	scanf("%d", &T);

	// 이중 배열 메모리 할당
	char **W = (char **)malloc(T * sizeof(char *));
	for (i = 0; i < T; i++) {
		W[i] = (char *)malloc(1001 * sizeof(char));
	}



	for (i = 0; i < T; i++) {
		scanf("%s", W[i]);
	}

	for (i = 0; i < T; i++) {
		j = 0;
		printf("%c", W[i][0]);
		while (1) {
			if (('A' <= W[i][j] && W[i][j] <= 'Z')) {
				j++;
			}
			else {
				break;
			}
		}
		printf("%c\n", W[i][j - 1]);
	}

	// 이중 배열 메모리 해제
	for (i = 0; i < T; i++) {
		free(W[i]);
	}
	free(W);

	return 0;
}