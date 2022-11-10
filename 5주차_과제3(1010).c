#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long fs_nCr(int n, int r)
{
    static long long DP[67][67];

    if (DP[n][r]) return DP[n][r];

    if (r == 1) return (DP[n][r] = n);
    if (r == 0 || r == n) return (DP[n][r] = 1);

    return (DP[n][r] = fs_nCr(n - 1, r - 1) + fs_nCr(n - 1, r));
}

int main()
{
    int T, N, R;

    scanf("%d", &T);
    for (int i = 0; i < T; i++, R++)
    {
        scanf("%d %d", &R, &N);
        printf("%lld\n", fs_nCr(N, R));
    }
    return 0;
}