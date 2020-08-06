#include <stdio.h>

int GetStringLength(char data[]) {

    int count = 0;

    while(data[count]) count++;
    return count;
}

void main() {

    int data_length;
    char data[10] = {'h' ,'a', 'p', 'p', 'y', 0,};

    data_length = GetStringLength(data);

    printf("data length = %d\n", data_length);
}
