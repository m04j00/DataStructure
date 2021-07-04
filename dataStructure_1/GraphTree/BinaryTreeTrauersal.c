#include <stdio.h>

struct node {
	struct node* llink;
	char data;
	struct node* rlink;
};

struct node* CREATE(char data) {
	struct node* ptr = (struct node*)malloc(sizeof(struct node));

	ptr->llink = NULL;
	ptr->data = data;
	ptr->rlink = NULL;
	return ptr;
}

void DELETE(struct node* Del) {
	if (Del != NULL) {
		DELETE(Del->llink);
		DELETE(Del->rlink);
		free(Del);
	}
}

void Preorder(struct node* ptr) {
	if (ptr != NULL) {
		printf("%c  ", ptr->data);
		Preorder(ptr->llink);
		Preorder(ptr->rlink);
	}
}

void Inorder(struct node* ptr) {
	if (ptr != NULL) {
		Inorder(ptr->llink);
		printf("%c  ", ptr->data);
		Inorder(ptr->rlink);
	}
}

void Postorder(struct node* ptr) {
	if (ptr != NULL) {
		Postorder(ptr->llink);
		Postorder(ptr->rlink);
		printf("%c  ", ptr->data);
	}
}

int main() {
	struct node* root = CREATE('A');

	root->llink = CREATE('B');
	root->rlink = CREATE('C');

	root->llink->llink = CREATE('D');
	root->llink->rlink = CREATE('E');
	root->rlink->llink = CREATE('F');
	root->rlink->rlink = CREATE('G');

	printf("傈困 款青(PreOrder) : ");
	Preorder(root);
	printf("\n");
	printf("吝困 款青(InOrder) : ");
	Inorder(root);
	printf("\n");
	printf("饶困 款青(PostOrder) : ");
	Postorder(root);
	printf("\n");

	DELETE(root);

	return 0;
}