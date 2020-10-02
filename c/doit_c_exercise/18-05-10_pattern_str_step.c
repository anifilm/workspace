// 사용자가 입력한 문자열에서 단어 찾기 (C, 1)
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 64

int MyGetString(char a_string[], int a_max_length) {
	int i;
	for (i = 0; i < a_max_length; i++) {
		a_string[i] = getchar();
		if (a_string[i] == '\n') break;
	}
	// 문자열 마지막 위치에 NULL 문자를 추가
	a_string[i] = '\0';

	return i;
}

int main() {

	int i, j, str_len, find_len, find_count = 0;
	char str[MAX_LENGTH], find[MAX_LENGTH];

	printf("Input String: ");
	str_len = MyGetString(str, MAX_LENGTH);

	printf("Find String: ");
	find_len = MyGetString(find, MAX_LENGTH);

	for (i = 0; i < str_len - find_len; i++) {
		for (j = 0; j < find_len; j++) {
			if (str[i + j] == find[j]) find_count++;
		}
	}
	find_count /= find_len;

	printf("\nFind '%s' count: %d\n", find, find_count);

	return 0;
}
