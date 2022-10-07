#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[10];
	int x, temp;
	scanf("%d", &x);

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &a[j]);
		}

		for (int k = 0; k < 9; k++) {
			for (int z = 0; z < 9 - k; z++) {
				if (a[z] > a[z + 1]) {
					temp = a[z];
					a[z] = a[z + 1];
					a[z + 1] = temp;
				}
			}
		}
		printf("%d\n", a[7]);
	}
	printf("\n");
}