#include <stdio.h>

int read_char(void *p, int byte);

int main() {

	int arr[1] = {0x12345678};

	printf("%x\n", arr[0]);

	read_char(arr, 4);

    return 0;
}

int read_char(void *p, int byte) {
	do {
		printf("%x\n", *(char *)p);
		byte--;
	} while ((char *)p++ && byte);

	return 0;
}
