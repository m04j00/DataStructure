#include <stdio.h>

struct personal_info {
	char name[20];
	char address[50];
	char tel_no[15];
	char e_mail[50];
};

struct book {
	char title[30];
	struct personal_info writer; // ��ø ����ü
	long value;
	char publisher[30];
};

int main() {

	struct book b1 = {"0���� ���нð�" "�̳���", "888-8888", "struct.com", 15000, "����"};
	
	printf("%s", b1.title);

}