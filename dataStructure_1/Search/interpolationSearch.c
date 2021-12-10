#include <stdio.h>

int interpolationSearch(int a[], int n, int key) {
	int left = 0, right = n - 1, middle;
	int j = 0;
	while (left <= right) {
		
		
		if (a[left] < a[right]) {
			j++;
			middle = left + (right - left) * (key - a[left]) / (a[right] - a[left]);
			if (middle > right) middle = right;
			if (middle < left) middle = left;
		}
		else middle = left;
		if (key == a[middle]) {
			printf("j : %d\n", j);
			return middle;
		}
		else if (key > a[middle]) left = middle + 1;
		else right = middle - 1;

	}
	return -1;
}
int main() {
	int a[] = {
7,
12,
17,
22,
27,
32,
37,
42,
47,
52,
57,
62
	};
	int i, key, index, n;
	n = sizeof(a) / sizeof(int);
	printf("n size : %d\n", n);
	for (i = 0; i < n; i++) {
		printf("%d   ", a[i]);
	}
	printf("\n");
	while (1) {
		printf("입력 : ");
		scanf_s("%d", &key);
		index = interpolationSearch(a, n, key);
		if (index >= 0) {
			printf("%d\n", index);
		}
		else printf("없음");
	}
}