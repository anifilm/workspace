#include <stdio.h>
#define MAX 100

void print_array(const int arr[], int length) {
    int i;
    for (i = 0; i < length; i++)
        printf("%d ", arr[i]);
}

int main() {

    int i, temp, rabbit[MAX];

    printf("Enter an integer: ");
    scanf("%d", &temp);
    for (i = 0; temp >= 0; i++) {
        rabbit[i] = temp;
        printf("Enter an integer: ");
        scanf("%d", &temp);
    }
    printf("\n");

    print_array(rabbit, i);
    printf("\n");

    return 0;
}
