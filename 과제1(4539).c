#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma warning(disable:6031)
#pragma warning(disable:4996)
#define r(x) for (int i = 0; i < x; i++)
int round(int x) {
    int cmp = 10;
    while (x > cmp) {
        if (x % cmp >= cmp / 2)x = x - (x % cmp) + cmp;
        else x = x - (x % cmp);
        cmp *= 10;
    }
    return x;
}
int main() {
    int n, x;
    scanf("%d", &n);
    r(n) {
        scanf("%d", &x);
        printf("%d\n", round(x));
    }
    return 0;
}