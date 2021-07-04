#include <stdio.h>
#define MAX 8

int rear = -1, front = 0;
int cqueue[MAX];
int cnt = 0;

int ADD(int data) {
	if (cnt == MAX) {
		printf("queue overflow\n");
		return -1;
	}
	cnt++;
	cqueue[++rear % MAX] = data;
	return 0;
}

int DELETE() {
	if (cnt == 0) {
		printf("queue underflow\n");
		return -1;
	}
	cnt--;
	return cqueue[front++ % MAX];

}

int main(void) {
	ADD(10); ADD(20);
	ADD(30); ADD(40);
	ADD(50); ADD(60);
	ADD(70);
	printf("%d\n", DELETE());
	printf("%d\n", DELETE());
	ADD(80);
	ADD(90);
	return 0;
}