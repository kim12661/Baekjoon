#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int i;
	char input[100][101];

	for (i = 0; i < 100; i++) {
		if(gets(input[i]));
		else break;
		if (input[i][0] == 0) break;
	}

	for (int j = 0; j < i; j++) {
		printf("%s\n", input[j]);
	}

	return 0;
}
