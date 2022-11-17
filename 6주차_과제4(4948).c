#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int input) {
	int i = 0;
	int tmp, j;
	if (input == 2) { return 1; }
	else if (input % 2 == 0 || input == 1) {
		return 0;
	}
	else {
		tmp = 1;
		for (j = 3; j * j < input + 1; j = j + 2) {
			if (input % j == 0) {
				tmp = 0;
				return 0;
			}
		}
		if (tmp == 1) {
			return 1;
		}
	}
}

int main() {

	int test_num, i, j, input;

	for (i = 0; i < 123456; i++) {
		scanf("%d\n", &input);     
		int num_prime = 0;
		if (input == 0) { break; }
		for (j = input + 1; j < 2 * input + 1; j++) {
			num_prime = num_prime + isPrime(j);
		}
		printf("%d\n", num_prime);
	}

	return 0;
}
