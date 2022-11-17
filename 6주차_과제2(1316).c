#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a_num = 0;
	int gr_num = 0;
	char strs[101][101];

	scanf("%d", &a_num);
	for (int i = 0; i < a_num; i++) {
		scanf("%s", strs[i], sizeof(strs[i]));
	}

	for (int j = 0; j < a_num; j++) {
		int alp[27] = { 0, };
		int cck = 1;
		char c;
		for (int k = 0; strs[j][k] != '\0'; k++) {
			if (alp[strs[j][k] - 97] == 0) {
				c = strs[j][k];
				alp[strs[j][k] - 97] += 1;
			}
			else if (alp[strs[j][k] - 97] != 0) {
				if (strs[j][k] == c) {
					continue;
				}
				else {
					cck = 0;
					break;
				}

			}
		}
		(cck == 1) ? gr_num += 1 : 0;
	}

	printf("%d", gr_num);

	return 0;
}