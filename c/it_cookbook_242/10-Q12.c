// 12 집합 연산에는 새로운 원소를 추가하는 작업(Addition)과 기존 원소를 제거하는 작업(Deletion)이
// 필수적이다. 이 두 가지 작업을 아래 add_element와 delete_element 함수로 구현하라. 여기서 value
// 는 삽입이나 삭제할 값을, set는 집합을, cp는 원소의 개수를 저장한 변수 count를 가리키는 포인터다.
// 이를 포인터로 만든 이유는 함수 사이에 count 변수를 공유하기 위해서다. 집합 내에 동일 원소가 있어
// 서는 안 되기 때문에 add_element 내부에서는 has_element를 호출하여 해당 원소가 없을 경우에 한해
// 서 추가해야 한다. 유사한 맥락에서 원소를 제거하는 작업에서도 has_element를 호출하여 제거하려는
// 원소가 없으면 그대로 두어야 한다. 작업이 끝날 때마다 현재의 집합 요소를 오름차순으로 정렬해서
// 출력해야 한다. 'q'가 입력되면 프로그램을 끝내야 한다.
// 힌트 추가할 때는 배열 끝에 추가한다. 삭제할 때는 이동이 필요하다. 예를 들어, 인덱스 0부터 5까지
// 인 상태에서 인덱스 2에 있는 요소를 삭제하면 인덱스 3, 4, 5에 있는 요소가 차례차례 외쪽으로 한 칸
// 씩 이동해야 한다. 추가할 경우 count가 증가하고 삭제할 경우 count가 감소한다. a 5가 입력되면 숫자
// 5를 읽고 난 다음에는 while ((ch = getchar()) != '\n');에 의해 버퍼 클리어링을 해야 한다.
// int has_element(int value, int set[], const int *cp);
// void add_element(int value, int set[], int *cp);
// void delete_element(int value, int set[], int *cp);
// > Enter commands: a 5 adds 5 to the set, d 5 deletes 5 from the set.
// > a 20 ([Enter])
// > 20
// > Enter Commands: a 5 adds 5 to the set, d 5 deletes 5 from the set.
// > a 10 ([Enter])
// > 10 20
// > Enter Commands: a 5 adds 5 to the set, d 5 deletes 5 from the set.
// > d 10 ([Enter])
// > 20
// > q ([Enter])
#include <stdio.h>

int has_element(int value, int set[], const int *cp);
void show_element(int set[], const int *cp);
void sort_element(int set[], const int *cp);
void add_element(int value, int set[], int *cp);
void delete_element(int value, int set[], int *cp);

int main() {

    char ch;
    int val, element[100], count = 0;

    while (1) {
        printf("Enter commands: a 5 adds 5 to the set, d 5 deletes 5 from the set.\n");
        scanf("%c", &ch);
        if (ch == 'q') break;
        scanf("%d", &val);
        if (ch == 'a')
            add_element(val, element, &count);
        else if (ch == 'd')
            delete_element(val, element, &count);
        while ((ch = getchar()) != '\n');
        show_element(element, &count);
    }

    return 0;
}

int has_element(int value, int set[], const int *cp) {
    int i;
    for (i = 0; i < *cp; i++)
        if (set[i] == value)
            return 1;
    return 0;
}

void show_element(int set[], const int *cp) {
    int i;
    for (i = 0; i < *cp; i++)
        printf("%d ", set[i]);
    printf("\n");
}

void sort_element(int set[], const int *cp) {
    int i, j, key;
    for (i = 1; i < *cp; i++) {
        key = set[i];
        for (j = i - 1; j >= 0 && set[j] > key; j--)
            set[j + 1] = set[j];
        set[j + 1] = key;
    }
}

void add_element(int value, int set[], int *cp) {
    if (has_element(value, set, cp))
        return;
    else {
        set[*cp] = value;
        *cp += 1;
    }
    sort_element(set, cp);
}

void delete_element(int value, int set[], int *cp) {
    int i, j;
    if (!has_element(value, set, cp)) {
        return;
    } else {
        for (i = 0; i < *cp; i++)
            if (set[i] == value)
                for (j = i; j < *cp; j++)
                    set[j] = set[j + 1];
        *cp -= 1;
    }
    sort_element(set, cp);
}
