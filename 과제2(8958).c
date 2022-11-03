#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]) {
	int num;
	scanf("%d", &num);

	char ch[101];
	int i = 0;
	int j = 0;
	int count = 0;
	int sum = 0;
	int sum1[101];

	for (i = 0; i < num; i++) {
		
		count = 0;
		scanf("%s", ch);
		sum = 0;
		for (j = 0; j < strlen(ch); j++) {
			if (ch[j] == 79) { 
				count = count + 1; 
				sum = sum + count;
			}
			else if (ch[j] == 88) { 
				count = 0; 
				sum = sum + count;
			}
		}
		sum1[i] = sum;
	}
	for (i = 0; i < num; i++) {
		printf("%d\n", sum1[i]);
	}

	return 0;
}