#include <stdio.h>

int main() {
	int a[10] = { 5, 10, 15, 20 };
	int* p;
	p = a;

	p = &a[0];
	p = a + 2;
	//a = a + 3;

	printf("%d %d %d %d %p", a[0], *p, *(p + 1), *(a + 2), p);
}