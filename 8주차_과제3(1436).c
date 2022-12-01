#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int cnt = 0, i = 0, j = 0;	  
	while (1) {
		if (i % 10000 == 6660) {
			for (j = 0; j < 10000; j++) {
				cnt++;
				if (cnt == N) {
					printf("%d%04d\n", i, j);
					return 0;
				}
			}
		}
		else if (i % 1000 == 666) {
			for (j = 0; j < 1000; j++) {
				cnt++;
				if (cnt == N) {
					printf("%d%03d\n", i, j);
					return 0;
				}
			}
		}
		else if (i % 100 == 66) {
			for (j = 0; j < 100; j++) {
				cnt++;
				if (cnt == N) {
					printf("%d6%02d\n", i, j);
					return 0;
				}
			}
		}
		else if (i % 10 == 6) {
			for (j = 0; j < 10; j++) {
				cnt++;
				if (cnt == N) {
					printf("%d66%d\n", i, j);
					return 0;
				}
			}
		}
		else if (i == 0) {
			cnt++;
			if (cnt == N) {
				printf("666\n");
				return 0;
			}
		}
		else {
			cnt++;
			if (cnt == N) {
				printf("%d666\n", i);
				return 0;
			}
		}
		i++;
	}
}