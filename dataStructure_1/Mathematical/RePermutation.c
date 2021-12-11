#include <stdio.h>
#define R 3

int b[R] = { 0, };
int cnt = 0;
void printRePer() {
	int i;
	cnt++;
	for (i = 0; i < R; i++) {
		printf("%d  ", b[i]);
	}
	printf("\n");
}
void RePermutation(int a[], int n, int r) {
	int i;
	if (r >= R) printRePer();
	else for (i = 0; i < n; i++) {
		b[r] = a[i];
		RePermutation(a, n, r + 1);
	}
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int n = 5;
	RePermutation(a, n, 0);
	printf("중복 순열 개수 : %d\n", cnt);
}