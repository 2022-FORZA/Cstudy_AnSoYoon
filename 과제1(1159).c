#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, i, flag = 0;
	char name[31];
	int alp[27] = { 0 };

	scanf("%d", &N);

	for (i = 0; i < N; ++i) {
		scanf("%s", name);
		alp[name[0] - 'a']++;
	}

	for (i = 0; i < 26; ++i) {
		if (alp[i] >= 5) {
			printf("%c", i + 'a');
			flag = 1;
		}
	}
	if (flag == 0)
		printf("PREDAJA");

	return 0;
}