#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char* name;
    int residnet_no;
};

int main() {

    struct employee seller, *p;

    p = &seller;
    p->name = "Jay Kim";
    puts(p->name);

    p->name = (char*)malloc(sizeof(char) * 40);
    if (p->name == NULL) {
        printf("No more memory.\n");
        exit(1);
    }
    strcpy(p->name, "John Doe");
    puts(p->name);
    free(p->name);

    return 0;
}
