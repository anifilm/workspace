#include <stdio.h>

enum menu {
    _insert = 1, _delete, _update
};

typedef enum menu menuType;

int main() {

    menuType selection;

    printf("Enter 1 to insert, 2 to delete, 3 to update.\n");
    scanf("%d", &selection);

    if (selection == _insert)
        printf("Run insert callback function.\n");
    else if (selection == _delete)
        printf("Run delete callback function.\n");
    else
        printf("Run update callback function.\n");

    return 0;
}
