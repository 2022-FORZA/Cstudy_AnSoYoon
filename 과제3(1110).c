#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, a, b, c, d, e, z;
	int i = 0;

	scanf("%d", &n);
	z = n; 
	while (1) {
		a = n / 10; 
		b = n % 10; 
		c = a + b; 
		d = c % 10; 
		e = b * 10 + d;  
		n = e;
		i++; 
		if (n == z) {
			break;
		}
	}
	printf("%d", i);

	return 0;
}