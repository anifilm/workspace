#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void*, const void*);
int com(char* arr1, char* arr2);

int main(void)
{
    char arr1[4][100];
    char arr2[100];
    int i;
    char* directory;

    for (i = 0; i < 4; i++)
    {
        printf("enter arr1[%d] : ", i);
        scanf("%s", arr1[i]);
    }

    printf("enter searching words : ");
    scanf("%s", arr2);

    qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), compare);
    directory = (char*)bsearch(arr2, arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), compare);

    if (directory == NULL)
        printf("search is failed\n\n");
    else
        printf("search is succeeded. address : %#x, sentence : %s\n\n", directory, directory);

    return 0;
}

int compare(const void* key, const void* value)
{
    char* arr1 = (char*)key;
    char* arr2 = (char*)value;
    return com(arr1, arr2);
}

int com(char* arr1, char* arr2)
{
    while (*arr1 != '\0' || *arr2 != '\0')
    {
        if (*arr1 < *arr2)
            return 1;
        else if (*arr1 > *arr2)
            return -1;
        else
        {
            (arr1)++;
            (arr2)++;
        }
    }
    return 0;
}
