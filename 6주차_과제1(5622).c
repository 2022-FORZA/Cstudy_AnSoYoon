#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char str[16];
	int num[16], tot = 0;

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		num[i] = str[i];
		if (num[i] >= 65 && num[i] <= 67)
			tot = tot + 3;
		else if (num[i] >= 68 && num[i] <= 70)
			tot = tot + 4;
		else if (num[i] >= 71 && num[i] <= 73)
			tot = tot + 5;
		else if (num[i] >= 74 && num[i] <= 76)
			tot = tot + 6;
		else if (num[i] >= 77 && num[i] <= 79)
			tot = tot + 7;
		else if (num[i] >= 80 && num[i] <= 83)
			tot = tot + 8;
		else if (num[i] >= 84 && num[i] <= 86)
			tot = tot + 9;
		else if (num[i] >= 87 && num[i] <= 90)
			tot = tot + 10;
	}

	printf("%d", tot);

	return 0;
}