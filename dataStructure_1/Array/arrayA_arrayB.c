#include <stdio.h>

int main() {
	int i, j, b[5][3];
	int a[3][5] = { {5, 41, 24, 6, 10},
					{50, 33, 20, 15, 11},
					{7, 17, 35, 21, 16} };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			b[j][i] = a[i][j];
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			 printf("%d  ", b[i][j]);
		}
		printf("\n");
	}
}
/*
 �迭 a
		1, 2, 3, 4, 5
		6, 7, 8, 9, 10
		11, 12, 13, 14, 15
*/
/*
 �迭 b
		1, 6, 11
		2, 7, 12
		3, 8, 13
		4, 9, 14
		5, 10, 15
*/