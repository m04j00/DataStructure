#include <stdio.h>
#define MAX 8
int queue[MAX], rear = -1, front = 0;

int ADD(int data) {
	if (rear == MAX - 1) {
		printf("queue overflow\n");
		return -1;
	}
	queue[++rear] = data;
	return 0;
}

int DELETE() {
	if (front > rear) {
		printf("queue underflow\n");
		return -1;
	}
	return queue[front++];
}

int main() {
	ADD(10);
	ADD(20);
	ADD(30);
	printf("DELETE : %d\n", DELETE());
	printf("DELETE : %d\n", DELETE());
	return 0;
}