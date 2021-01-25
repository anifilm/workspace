/* 문제 10-1 [median of three]
앞서 구현한 퀵 정렬의 Partition 함수에 다음과 같이 출력문을 삽입하몀 선택된 피벗이 무엇인지, 그리고 정렬과정에서 몇 개의
피벗이 선택되었는지 확인할 수 잇다.

선택된 피벗의 수는 정렬의 효율을 가늠하는 기준이 된다. 그럼 위와 같이 피벗의 확인을 위한 문자을 삽입한 다음에 다음 배열을
대상을 정렬을 진행해 보자.
  int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

여러분도 알다시피 이는 최악의 상황을 연출한 것이다. 앞서 가장 왼쪽에 위치한 값을 무조건 피벗으로 결정하도록 구현했기 때문
이다. 실제 실행결과를 보면 총 14개의 피벗이 선택되었음은 확인 할 수 있다. 말 그대로 최악이다. 따라서 우리는 최악의 상황
을 면하기 위해서 피벗의 선택방법을 다음과 같이 바꿔보고자 한다.

  "정렬 대상의 가장 왼쪽, 가장 오른쪽, 그리고 중간에 위치한 값을 추출해서 이 중에서 중간에 해당하는 값을 피벗으로 결정
  한다."

이는 앞서 필자가 언급한 '중간 값 고르기'에 해당한다. 이제 여러분은 위의 방식대로 피벗이 결정되도록 예제를 변경해야 한다.
그래서 위의 배열을 대상으로 정렬을 진행했을 때 선택되는 피벗의 수를 확인해 보자.
*/
#include <stdio.h>

void Swap(int arr[], int idx1, int idx2) {
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

int MedianOfThree(int arr[], int left, int right) {
    int samples[3] = {left, (left + right) / 2, right};  // 인덱스 값으로 배열을 구성

    if (arr[samples[0]] > arr[samples[1]])
        Swap(samples, 0, 1);

    if (arr[samples[1]] > arr[samples[2]])
        Swap(samples, 1, 2);

    if (arr[samples[0]] > arr[samples[1]])
        Swap(samples, 0, 1);

    return samples[1];
}

int Partition(int arr[], int left, int right) {
    int pIdx = MedianOfThree(arr, left, right);  // 피벗을 선택
    int pivot = arr[pIdx];

    int low = left + 1;
    int high = right;

    Swap(arr, left, pIdx);  // 피벗을 가장 왼쪽으로 이동
    printf("피벗: %d\n", pivot);  // 피벗의 확인을 위해서 추가한 문장

    while (low <= high) {  // 교차되지 않을 때까지 반복
        // 피벗보다 큰 값을 찾는 과정
        while(pivot >= arr[low] && low <= right)
            low++;  // low를 오른쪽으로 이동
        // 피벗보다 작은 값을 찾는 과정
        while(pivot <= arr[high] && high >= (left+1))
            high--;  // high를 왼쪽으로 이동
        // 교차되지 않은 상태라면 Swap 실행
        if (low <= high)
            Swap(arr, low, high);
    }

    Swap(arr, left, high);  // 피벗과 high가 가리키는 대상 교환
    return high;  // 옮겨진 피벗의 위치정보 반환
}

void QuickSort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = Partition(arr, left, right);  // 둘로 나눠서
        QuickSort(arr, left, pivot - 1);   // 왼쪽 영영을 정렬
        QuickSort(arr, pivot + 1, right);  // 오른쪽 영영을 정렬
    }
}

int main() {

    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int len = sizeof(arr) / sizeof(int);

    QuickSort(arr, 0, len - 1);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
