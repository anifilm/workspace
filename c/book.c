#include <stdio.h>

char compare(char *str1, char *str2);

//책을 추가하는 함수
int add_book(char (*book_name)[30], char (*auth_name)[30],
		char (*publ_name)[30], int *borrowed, int *num_total_book) {

	printf("추가할 책의 제목: ");
	scanf("%s", book_name[*num_total_book]);

	printf("추가할 책의 저자: ");
	scanf("%s", auth_name[*num_total_book]);

	printf("추가할 책의 출판사: ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0;	//빌려지지 않음

	printf("입력한 책이 추가되었습니다.\n");
	(*num_total_book)++;

	return 0;
}

int search_book(char (*book_name)[30], char (*auth_name)[30],
		char (*publ_name)[30], int num_total_book) {

	int user_input;
	int i;
	char user_search[30];

	printf("\n어느 항목으로 검색 할 것인가요?\n");
	printf("1. 제목 검색\n");
	printf("2. 저자 검색\n");
	printf("3. 출판사 검색\n");

	printf("\n당신의 선택은: ");
	scanf("%d", &user_input);

	printf("\n검색할 단어를 입력해주세요: ");
	scanf("%s", user_search);

	printf("\n[검색결과]\n");

	if (user_input == 1) {
		/* i가 0부터 num_total_book까지 가면서 각각의 '책 제목'을
		   사용자가 입력한 검색어와 비교한다 */
		
		for (i = 0; i < num_total_book; i++) {
			
			if (compare(book_name[i], user_search)) {

				printf("번호: %d // 책 이름: %s // 저자: %s // 출판사: %s\n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	} else if (user_input == 2) {
		/* i가 0부터 num_total_book까지 가면서 각각의 '저자'를
		   사용자가 입력한 검색어와 비교한다 */
		
		for (i = 0; i < num_total_book; i++) {
			
			if (compare(auth_name[i], user_search)) {

				printf("번호: %d // 책 이름: %s // 저자: %s // 출판사: %s\n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}

	} else if (user_input == 3) {
		/* i가 0부터 num_total_book까지 가면서 각각의 '출판사'를
		   사용자가 입력한 검색어와 비교한다 */
		
		for (i = 0; i < num_total_book; i++) {
			
			if (compare(publ_name[i], user_search)) {

				printf("번호: %d // 책 이름: %s // 저자: %s // 출판사: %s\n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}

	return 0;
}

int borrow_book(int *borrowed) {

	// 대여할 책의 번호
	int book_num;

	printf("대여할 책의 번호를 입력하세요\n");
	printf("책 번호: ");
	scanf("%d", &book_num);

	if (borrowed[book_num] == 1) {
		printf("\n이미 대출된 책입니다.\n");
	} else {
		printf("\n책이 대출되었습니다.\n");
		borrowed[book_num] = 1;
	}

	return 0;
}

int return_book(int *borrowed) {

	// 반납할 책의 번호
	int book_num;

	printf("반납할 책의 번호를 입력하세요\n");
	printf("책 번호: ");
	scanf("%d", &book_num);

	if (borrowed[book_num] == 0) {
		printf("\n이미 반납된 책입니다.\n");
	} else {
		printf("\n책이 반납되었습니다.\n");
		borrowed[book_num] = 0;
	}

	return 0;
}

int main() {

	int user_choice;
	int num_total_book = 0;

	// 각각 책, 저자, 출판사를 저장할 배열을 생성, 책의 최대 개수는 100권
	char book_name[100][30], auth_name[100][30], publ_name[100][30];

	// 빌렸는지 상태를 표시
	int borrowed[100];

	while (1) {
		printf("\n[도서 관리 프로그램]\n\n");
		printf("메뉴를 선택하세요\n");
		printf("1. 책을 새로 추가하기\n");
		printf("2. 책을 검색하기\n");
		printf("3. 책을 대여하기\n");
		printf("4. 책을 반납하기\n");
		printf("5. 프로그램 종료\n");

		printf("\n당신의 선택은: ");
		scanf("%d", &user_choice);
		
		if (user_choice == 1) {
			// 책을 새로 추가 하는 함수 호출
			add_book(book_name, auth_name, publ_name, borrowed, &num_total_book);

		} else if (user_choice == 2) {
			// 책을 검색하는 함수 호출
			search_book(book_name, auth_name, publ_name, num_total_book);

		} else if (user_choice == 3) {
			// 책을 대여하는 함수 호출
			borrow_book(borrowed);

		} else if (user_choice == 4) {
			// 책을 반납하는 함수 호출
			return_book(borrowed);

		} else if (user_choice == 5) {
			// 프로그램을 종료한다
			printf("\n프로그램을 종료합니다.\n");
			break;
		}
	}

	return 0;
}

char compare(char *str1, char *str2) {

	while (*str1) {

		if (*str1 != *str2) {
			return 0;
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0') return 1;

	return 0;
}