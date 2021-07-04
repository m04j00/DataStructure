#include <stdio.h>

struct personal_info {
	char name[20];
	char address[50];
	char tel_no[15];
	char e_mail[50];
};

struct book {
	char title[30];
	struct personal_info writer; // 중첩 구조체
	long value;
	char publisher[30];
};

int main() {

	struct book b1 = {"0교시 문학시간" "이낭희", "888-8888", "struct.com", 15000, "나라말"};
	
	printf("%s", b1.title);

}