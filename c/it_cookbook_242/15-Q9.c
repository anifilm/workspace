/* 09
stdlib.h에 등록된 quick sort 함수와 마찬가지로 bubble sort도 범용 함수로 만들어 볼 수 있다. 다음 프로그램을 완성하여
정수 배열이나 문자 배열에 대해 동일한 방식으로 bubble sort를 호출할 수 있도록 만들어 보라.
*/
#include <stdio.h>
#include <string.h>
#define STRLEN 10                   // 문자열 최대 길이

// compare_str과 원형이 같아야 하므로 배열을 void*로 받음
int compare_int(void* a, int i) {
    int* nptr = (int*)a;            // void*를 int*로 형 변환해야
    return (nptr[i] - nptr[i + 1]); // 포인터 산술 연산이 가능
}

int compare_str(void* a, int i) {   // a에는 2차원 배열이라는 정보가 없음
    char (*row)[STRLEN] = a;        // row가 가리키는 것은 STRLEN개의 문자로 이루어진 배열
                                    // 이제 row는 2차원 배열의 한 행. 즉, 하나의 단어를 가리킴
    return (strcmp(row[i], row[i + 1]));    // i행의 문자열과 (i + 1)행의 문자열을 비교
}

// swap_str과 원형이 같아야 하므로 배열을 void*로 받음
void swap_int(void* a, int i) {
    int* nptr = (int*)a;            // void*를 int*로 형 변환
    int temp;
    temp = nptr[i];
    nptr[i] = nptr[i + 1];
    nptr[i + 1] = temp;
}

void swap_str(void* a, int i) {
    char (*row)[STRLEN] = a;
    char temp[STRLEN];
    strcpy(temp, row[i]);
    strcpy(row[i], row[i + 1]);
    strcpy(row[i + 1] , temp);
}

// 정수 배열이나 문자열 배열이나 동일한 원형으로 넘겨받아햐 하므로
// arr 배열을 void* 형으로 선언
void bubble_sort(void* arr, int (*compare)(void*, int), void (*swap)(void*, int), int numelt) {
    int pass, current, sorted = 0;
    for (pass = 1; (pass < numelt) && (!sorted); pass++) {
        sorted = 1;
        for (current = 0; current < (numelt - pass); current++) {
            if (compare(arr, current) > 0) {
                // 현재 arr은 void 포인터이므로 포인터 산술 연산 불가
                // 따라서 compare(arr[current], arr[current + 1]) 대신 위처럼 호출
                swap(arr, current);     // swap도 마찬가지
                sorted = 0;
            }
        }
    }
}

int main() {

    int i;
    int int_vector[] = {3, 1, 2, 5, 4, 6};
    char str_vector[][STRLEN] = {"peach", "grape", "banana", "apple"};
    bubble_sort(int_vector, compare_int, swap_int, 6);
    for (i = 0; i < 6; i++)
        printf("%d ", int_vector[i]);
    printf("\n");

    bubble_sort(str_vector, compare_str, swap_str, 4);
    for (i = 0; i < 4; i++)
        printf("%s ", str_vector[i]);
    printf("\n");

    return 0;
}
