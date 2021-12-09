#include <stdio.h>

void InsertionSort(int a[], int n) {
	int i, j, key;
	for (i = 0; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (key >= a[j]) break;
			a[j + 1] = a[j];
		}
		a[j + 1] = key;
		printf("%d  ", i);
		for (int i = 0; i < 8; i++) printf("%d   ", a[i]);
		printf("\n");
	}
	
	
}
int main() {
	int a[] = { 25 , 9  ,15,  38 , 51 , 72  ,47  ,36 };
	int i, n = sizeof(a) / sizeof(int);
	printf("Á¤·Ä Àü : \n");
	InsertionSort(a, n);
}