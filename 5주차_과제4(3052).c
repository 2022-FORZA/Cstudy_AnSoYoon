#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    int temp[10];
    int result = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &temp[i]);
        temp[i] = temp[i] % 42;
    }

    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int k = i + 1; k < 10; k++) {
            if (temp[i] == temp[k]) { 
                count++;
            }
        }
        if (count == 0) {
            result++; 
        }
    }
    printf("%d", result);
    return 0;
}
