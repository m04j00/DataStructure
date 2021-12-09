#include <stdio.h>

void ShellSort(int a[], int n) {
	int i, j, t;
	int temp;
	for (t = n / 2; t >= 1; t /= 2) {
		for (i = t; i < n; i++) {
			temp = a[i];
			for (j = i - t; j >= 0; j -= t) {
				if (temp < a[j]) a[j + t] = a[j];
				else {break;
				}
			}
			a[j + t] = temp;
		}


		for (int k = 0; k < 13; k++) printf("%d   ", a[k]);
		printf("\n");
	}
}
int main() {
	int a[] = { 51  ,15 , 25 , 72 , 9 , 38,  47 , 36 , 11 , 3 , 54 , 88  ,31 };
	int n = sizeof(a) / sizeof(int);
	ShellSort(a, n);
}