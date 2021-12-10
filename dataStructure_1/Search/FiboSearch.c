#include <stdio.h>

int fiboSearch(int a[], int n, int s_value) {
	int index = 0, pos, k = 0;
	int fibo[] = { 0,1,1,2,3,5,8,13,21,34,55,89,144,233 };
	while (fibo[k] < n) k++;
	int j = 0;
	while (k > 0) {
		j++;
		pos = index + fibo[--k];
		if (pos < n) {
			if (s_value == a[pos])
			{
				printf("j : %d\n", j);
				return pos;
			}
			else if (s_value > a[pos]) {
				index = pos;
				k--;
			}
		}

	}

	return -1;
}
int main() {
	int a[] = { 5,9,11,15,18,21,24,30,33,38,46,57,58,60,61,67,72,75,88,92 };
	int n, search_data, i, pos;
	n = sizeof(a) / sizeof(int);
	printf("n size : %d\n", n);
	for (i = 0; i < n; i++) {
		printf("%d   ", a[i]);
	}
	printf("\n");
	while (1) {
		printf("입력 : ");
		scanf_s("%d", &search_data);
		pos = fiboSearch(a, n, search_data);
		if (pos >= 0) {
			printf("%d\n", pos);
		}
		else printf("없음");
	}
}