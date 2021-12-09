#include <stdio.h>
void QuickSort(int* a, int low, int high) {
	int i, j, key, temp;

	if (low < high) {
		key = a[low];
		i = low;
		j = high;
		while (i < j) {
			while (i < high && a[i] <= key)i++;
			while (j > low && a[j] >= key) j--;
			if (i < j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		a[low] = a[j];
		a[j] = key;
		for (int k = 0; k < 11; k++) printf("%d   ", a[k]);
		printf("\n");
		QuickSort(a, low, j - 1);
		QuickSort(a, j + 1, high);
		
	}
}

int main(void) {
	int a[] = {25,9,15,38,47,72,51,36,12,20,7};
	int i, n = sizeof(a) / sizeof(int);
	QuickSort(a, 0, n - 1);
}