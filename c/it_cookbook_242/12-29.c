#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char conti[3][5] = {"Kim", "Lee", "Park"};
    char temp[5];

    char* ragged[3] = {"Kim", "Lee", "Park"};
    char* temp_ptr;

    strcpy(temp, conti[2]);
    strcpy(conti[2], conti[0]);
    strcpy(conti[0], temp);
    for (i = 0; i < 3; i++)
        printf("%s ", conti[i]);
    printf("\n");

    temp_ptr = ragged[2];
    ragged[2] = ragged[0];
    ragged[0] = temp_ptr;
    for (i = 0; i < 3; i++)
        printf("%s ", ragged[i]);
    printf("\n");

    return 0;
}
