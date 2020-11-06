// 09 상대방에게 1부터 100 사이 숫자 하나를 생각하게 한 다음 그것을 맞추려는 질문을 던진다고 생각해
// 보자. 만약 '1이냐? 2냐? 3이냐? ...'라는 식으로 물어서 답을 찾는다면 최악의 경우 100번의 질문이
// 필요하다(상대방이 생각한 숫자가 100일 때). 이보다 효율적인 방법이 2진 탐색 (Binary Search)이다.
// 이는 '스무 고개'와 유사하다. 먼저 50이냐고 묻는다. 아니라고 하면 그것보다 큰지 작은지를 묻는다.
// 크다고 하면 이번에는 75냐고 묻는다. 아니라고 하면 다시 그것보다 큰지 작은지를 묻는다. 이렇게
// 하면 질문 한 번에 검색의 범위가 반으로 줄기 때문에 대략 100, 50, 25, 12, 6, 3, 1 크기로 범위
// 가 줄어든다. 따라서 대략 여섯 번 내외의 질문이면 충분하다.
// 정렬 결과 arr 배열에 10 20 30 40 50 60 70 80 90 100이 저장되었다고 가정하고 숫자 80이 저장
// 된 곳의 인덱스를 찾는다고 가정하자. 이 경우 2진 탐색은 일단 가운데 인덱스에 있는 숫자와 80을
// 비교한다. 예에서는 첫 인덱스가 0, 마지막 인덱스가 9이므로 가운데 인덱스를 arr[(0 + 9) / 2]라고
// 가정하면 일단 arr[4]와 80을 비교한다. 같으면 찾은 것이므로 인덱스 4를 출력한다. 그러나 이 경우
// arr[4]의 50보다 80이 크므로 이제 탐색 범위를 arr[4]의 오른쪽인 arr[5]에서 arr[9]까지고 줄일
// 수 있다. 다시 이 범위의 가운데에 있는 arr[7]과 80을 비교한다. 같으면 인덱스 7을 출력하고 그렇지
// 않으면 다시 탐색 범위를 좁힌다. 배열 데이터가 N개일 때 처음부터 끝까지 가면서 탐색하는 선형 탐색
// (Linear Search)이 최악의 경우에 대략 N번의 비교를 요하는데 비해서 2진 탐색은 대략 log₂N번의
// 비교면 충분하다.
// 12개의 입력 숫자를 배열에 저장하고 정렬한 후 2진 탐색에 의해 해당 숫자가 배열 인덱스 몇번에
// 저장되어 있는지를 출력하고 없으면 'No such data.'라고 출력하는 프로그램을 작성하라.
// 힌트 탐색 범위의 첫 인덱스를 first, 마지막 인덱스를 last라고 하고 first <= last일 때까지
// 루프를 돌아야한다. 만약 first > last에 의해 루프를 빠져나왔으면 'No such data.'라고 출력
// 한다. 재귀 호출에 의해 이를 구현하려면 아래 함수를 사용할 수 있다. 여기서 length는 배열 요소의
// 개수, value는 찾고자 하는 값, first와 last는 탐색의 범위를 나타내는 인덱스다. 따라서 범위 내의
// 가운데 인덱스 middle은 (first + last) / 2로 계산할 수 있다. 찾고자 하는 숫자가 arr[middle]보다
// 크면 first = middle + 1로 놓고 재귀 호출을 하면 된다. 그보다 작으면 last = middle - 1로 놓으면
// 된다. 베이스 케이스, 즉 first > last일 때는 인덱스 값 -1을 리턴함으로써 main에게 'No such data.'
// 라는 사실을 알릴 수 있다.
// int binary_search(int arr[], int length, int value, int first, int last);
// > Enter twelve integers.
// > 5 1 3 4 6 2 10 101 13 12 88 15 ([Enter])
// > Enter data to be searched.
// > 12 ([Enter])
// > It is in index 7
#include <stdio.h>

int binary_search(int arr[], int length, int value, int first, int last);
void print_array(const int arr[], int length);
void swap(int* p, int* q);
void bubble_sort(int arr[], int length);

int main() {

    int i, data[12], value, first, last, result;

    printf("Enter twelve integers.\n");
    for (i = 0; i < 12; i++)
        scanf("%d", &data[i]);
    first = 0;
    last = i - 1;
    // 버블 소트를 사용하여 입력된 정수를 오름차순으로 정렬
    bubble_sort(data, i);
    // print_array(data, i);

    printf("Enter data to be searched.\n");
    scanf("%d", &value);

    result = binary_search(data, i, value, first, last);
    if (result == -1)
        printf("No such data.\n");
    else
        printf("It is in index %d\n", result);

    return 0;
}

int binary_search(int arr[], int length, int value, int first, int last) {
    // 선형 탐색으로 선행 테스트
    // for (int i = 0; i < length; i++) {
    //     if (arr[i] == value)
    //         return i;
    // }
    int middle;
    while (first <= last) {
        middle = (first + last) / 2;
        if (value == arr[middle]) {
            return middle;
        } else {
            if (value > arr[middle])
                first = middle + 1;
            else
                last = middle - 1;
        }
    }
    return -1;
}

void print_array(const int arr[], int length) {
    int i;
    for (i = 0; i < length; i++)
        printf("%d ", arr[i]);
}

void swap(int* p, int* q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int arr[], int length) {
    int pass, current, sorted = 0;

    for (pass = 1; (pass < length) && (!sorted); pass++) {
        sorted = 1;
        for (current = 0; current < (length - pass); current++) {
            if (arr[current] > arr[current + 1]) {
                swap(&arr[current], &arr[current + 1]);
                sorted = 0;
            }
        }
    }
}
