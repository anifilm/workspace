#include <stdio.h>
#include <string.h>

int main() {

    int data_length;
    char data[10] = {'h' ,'a', 'p', 'p', 'y', 0,};

    data_length = strlen(data);

    printf("data length = %d\n", data_length);

	return 0;
}
