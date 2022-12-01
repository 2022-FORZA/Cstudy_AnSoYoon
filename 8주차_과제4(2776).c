#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int compare(const void* first, const void* second) {
    if (*(int*)first > *(int*)second) return 1;
    else if (*(int*)first < *(int*)second) return -1;
    else return 0;
}
int bn_s(int arr[], int n, int num) {
    int l = 0, r = n - 1, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (arr[mid] == num) return 1;
        else if (arr[mid] < num) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}
int arr[1000001], arr2[1000001];
int main() {
    int t, n1, n2;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n1);
        for (int j = 0; j < n1; j++) scanf("%d", &arr[j]);
        qsort(arr, n1, sizeof(int), compare);
        scanf("%d", &n2);
        for (int j = 0; j < n2; j++) {
            scanf("%d", &arr2[j]);
        }
        for (int j = 0; j < n2; j++) printf("%d\n", bn_s(arr, n1, arr2[j]));
    }
    return 0;
}