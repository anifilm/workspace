#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {

    int i, max, *rand_arr;

    srand(time(NULL));
    max = atoi(argv[1]);

    rand_arr = (int*)malloc(sizeof(int) * max);
    if (rand_arr == NULL) {
        fprintf(stderr, "No more memory.\n");
        exit(1);
    }

    for (i = 1; i < max; i++)
        *(rand_arr + i) = 1 + rand() % 45;
    for (i = 1; i < max; i++)
        printf("%d ", *(rand_arr + i));
    printf("\n");

    free(rand_arr);

    return 0;
}
