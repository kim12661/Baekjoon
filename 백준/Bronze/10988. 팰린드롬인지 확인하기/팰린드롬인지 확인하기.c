#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(void) {

	char word[101];
	char reverse[101];
	int n = 0;
	int i;
	int flag = 0;

	scanf("%s", word);

	for (i = 0; i < 101; i++) {
		if (word[i] == 0) break;
		n++;
	}

	for (i = 0; i < n; i++) {
		reverse[i] = word[n - 1 - i];
	}

	for (i = 0; i < n; i++) {
		if (word[i] != reverse[i]) {
			printf("0");
			flag = 1;
			break;
		}
	}

	if(flag == 0) printf("1");

	return 0;
}
