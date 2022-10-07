#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int gcd(long long int p, long long int q) {
	if (q == 0) return p;
	return gcd(q, p % q);
}

long long int cm(long long int p, long long int q) {
	long long int temp = gcd(p, q);

	return p * q / temp;
}

int main() {
	long long int a;
	long long int b;

	scanf("%lld %lld", &a, &b);

	printf("%lld", cm(a, b));

	return 0;
}