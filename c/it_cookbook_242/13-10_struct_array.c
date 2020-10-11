#include <stdio.h>

struct employee {
    int entry;
    char name[20];
    char phone[15];
};

int main() {

    int i;
    struct employee arr[3] = {
        {201504, "Lim", "02-5432-1234"},
        {201911, "Lee", "031-4434-2580"},
        {202002, "Park", "055-2535-9959"}
    };

    for (i = 0; i < 3; i++)
        printf("%d %s %s\n", arr[i].entry, arr[i].name, arr[i].phone);

    return 0;
}
