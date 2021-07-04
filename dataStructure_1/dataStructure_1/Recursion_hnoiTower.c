#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) {
	if (n == 1) printf("원판 %d %c -> %c\n", n, a, c);
	else {
		HanoiTower(n - 1, a, c, b); 
		//출발지 -> 경유지
		printf("원판 %d %c -> %c\n", n, a, c);
		HanoiTower(n - 1, b, a, c);
		//경유지 -> 독착지
	}
}

int main() {
	int n = 4;
	HanoiTower(n, 'A', 'B', 'C');
	// A - 출발지, B - 경유지, C - 도착지
	return 0;
}