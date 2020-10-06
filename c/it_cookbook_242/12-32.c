#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int i;
    char *name = argv[1];
    int age = atoi(argv[2]);

    printf("argc is %d\n", argc);
    printf("%s is %d years old.\n", name, age);

    for (i = 1; i < argc; i++)
        printf("%s ", argv[i]);
    printf("\n");

    return 0;
}
