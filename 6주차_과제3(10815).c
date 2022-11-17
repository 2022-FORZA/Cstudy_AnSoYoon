#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct
{
	int value;
	int rank;
}na;
int compare(const void* a, const void* b)
{
	na num1 = *(na*)a;
	na num2 = *(na*)b;
	if (num1.value < num2.value)
		return -1;
	if (num1.value > num2.value)
		return 1;
	return 0;
}
int binarysearch(na a[], int count, int num)
{
	int left = 0;
	int right = count - 1;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;

		if (a[mid].value == num)
			return 1;
		if (a[mid].value < num)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return 0;
}
na a[500000] = { 0 }, b[500000] = { 0 };
int main()
{
	int case_num1, case_num2;
	scanf("%d", &case_num1);
	for (int i = 0; i < case_num1; i++)
		scanf("%d", &a[i].value);
	scanf("%d", &case_num2);
	for (int i = 0; i < case_num2; i++)
		scanf("%d", &b[i].value);
	qsort(a, case_num1, sizeof(na), compare);
	for (int i = 0; i < case_num2; i++) {
		int k = binarysearch(a, case_num1, b[i].value);
		printf("%d ", k);
	}

}