// 10 main을 참고로 두 함수를 채우되 첫 함수는 배열 기호를, 둘째 함수는 포인터 산술 연산을
// 사용하라.
#include <stdio.h>

double average_by_array(int p[], int length) {
    double sum = 0.0;
    for (int i = 0; i < length; i++)
        sum += p[i];
    return sum / length;
}

double average_by_pointer(int* p, int length){
    double sum = 0.0;
    for (int i = 0; i < length; i++)
        sum += *(p + i);
    return sum / length;
}


int main() {

    int arr[5] = {10, 40, 50, 20, 15};
    printf("%lf\n", average_by_array(arr, 5));
    printf("%lf\n", average_by_pointer(arr, 5));

    return 0;
}
