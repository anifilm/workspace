/* 11
삽입 정렬(Insertion Sort)은 우리가 화투나 카드 퍠를 정렬할 때 무심코 적용하는 방법이다. 실수로 노트를
떨어뜨렸을 때 뒤섞인 페이지를 정렬할 때도 이 방법이 사용된다.
  (그림 10-18 삽입 정렬 생략...)

이는 왼쪽에서 오른쪽으로 가면서 정렬된 그룹을 늘려가는 방법이다. 1단계에서 가장 왼쪽 첫 숫자에만 주목한다.
22 하나이므로 그 자체로 정렬된 것이다. 2단계에서 다음 숫자를 보되 왼쪽 숫자와 비교한다. 37은 왼쪽의 22보다
크므로 그대로 둔다. 이렇게 함으로써 처음 두 개의 레코드는 정렬된 그룹을 이룬다. 다음 3단계에서 15는 왼쪽의
37보다 작다. 따라서 15와 37을 교환한다. 그러나 여기서 끝내서는 안 된다. 다시 왼쪽의 22와 비교해야 한다.
15가 22보다 작으므로 15와 22를 다시 교환한다. 또, 이런 방법으로 제자리를 찾을 때까지 비교를 계속해야 한다.
  (그림 10-19 풀 스왑과 하프 스왑 생략...)

삽입 정렬의 스왑에는 두 가지 방법이 있다. 풀 스왑(Full Swap)은 오른쪽이 왼쪽보다 작을 때마다 스왑을 계속하는
방법이다. 그림의 예를 들자면 4와 9를 스왑하고 이어서 4와 7을, 그리고 4와 5를 스왑하는 방법이다. 일반적으로
스왑은 세 번의 대입 연산을 요한다. a, b를 스왑하자면 a를 temp로, b를 a로, temp를 b로 넣어야 하기 때문이다.
스왑의 횟수를 줄여 실행 시간을 단축하기 위한 방법이 하프 스왑(Half Swap)이다. 그림에서 4가 9보다 작다고 판단
되더라도 일단 스왑을 유보한 채 9의 왼쪽에 있는 7과 비교를 한다. 4가 7보다 작다고 판단되더라도 일단 스왑을
유보한 채 9의 왼쪽에 있는 7과 비교를 한다. 4가 7보다 작더라도 다시 7의 왼쪽에 있는 5와 비교한다. 결국 4와 3을
비교 한 다음에야 4가 5의 자리에 들어가야 함을 알 수 있다. 이후 9, 7, 5를 차례차례 한 칸씩 오른쪽으로 이동시켜
4가 들어갈 자리를 마련한 다음에 단번에 5를 5의 자리로 이동시킨다. 실제로 이 경우에는 스왑이 일어나는 것이 아니라
이동만 일어나기 때문에 풀 스왑에 비해 실행시간이 상당히 줄어든다.
단계별로 이러한 삽입을 계속하면 정렬된 그룹은 점차 오른쪽으로 자라나 결국 정렬이 종료된다. 분명한 것은 현재
고려되고 있는 숫자의 왼쪽에 있는 모든 숫자는 정렬되어 있다는 사실이다. 이처럼 매번 루프를 돌 때마다 변하지 않는
사실을 루프 인베리언트(Loop Invariant)라고도 부른다.
다음 함수 원형을 써서 삽입 정렬 함수를 작성하고 main에서 그것을 불러 정렬 결과를 출력해 보라.
힌트 current 인덱스를 배열 처음부터 끝까지 가면서 각 요소에 대해 left 인덱스를 왼쪽에 있는 모든 요소와 비교를
해야 하므로 2중 for 문으로 처리해야 한다.
  void insertion_sort(int arr[], int length);

  > Enter input numbers.
  > 5 6 7 3 1 2 -1 ([Enter])
  > After sorting: 1 2 3 5 6 7
*/
#include <stdio.h>
#define MAX 100

void print_array(const int arr[], int length);
void swap(int* p, int* q);
void insertion_sort(int arr[], int length);

int main() {

    int i = 0, temp, data[MAX];

    printf("Enter input numbers.\n");
    while (1) {
        scanf("%d", &temp);
        if (temp < 0)
            break;
        data[i++] = temp;
    }

    printf("Before sorting: ");
    print_array(data, i);
    printf("\n");

    insertion_sort(data, i);
    printf("After sorting: ");
    print_array(data, i);
    printf("\n");

    return 0;
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

void insertion_sort(int arr[], int length) {
    int i, j, key;
    for (i = 1; i < length; i++) {
        key = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
            swap(&arr[j], &arr[j + 1]);
        arr[j + 1] = key;
    }
}
