// 스택 활용 미로 찾기 일부분
#include <stdio.h>
#define M 12
#define N 16
#define MAX M*N

enum boolean{false, true};

int top = -1;
int stack[MAX][3];

enum boolean PUSH(int x, int y, int d) {
	if (top >= MAX - 1) {
		printf("stack overflow\n");
		return false;
	}
	top++;
	stack[top][0] = x;
	stack[top][1] = y;
	stack[top][2] = d;

	return true;
}

enum boolean POP(int* x, int* y, int* d) {
	if (top == -1) {
		printf("stack underflow\n");
		return false;
	}

	*x = stack[top][0];
	*y = stack[top][1];
	*d = stack[top][2];
	top--;

	return true;
}