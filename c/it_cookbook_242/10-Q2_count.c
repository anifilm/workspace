// 02 -1이 들어오기 전까지 일련의 정수를 입력받아 그 중 찾고자 하는 정수가 몇 번 나타나는지를
// 계산하여 출력하는 프로그램을 작성하라. 단, 반드시 아래 함수를 호출해야 한다. 이 함수는 배열
// a의 마지막 요소 인덱스가 last일 때 배열 내부에 comp와 같은 숫자가 몇 번 나타나는지를 구하는
// 함수로서 재귀 호출로 작성해야 한다.
// 힌트 재귀 호출을 할 때마다 last를 1씩 감소시킨다. 현재의 arr[last]가 comp와 같으면 재귀
// 호출을 한 값에 1을 더해 리턴하고 그렇지 않으면 그냥 재귀 호출을 한다. 인덱스가 0인 경우에도
// 비교해야 하므로 베이스 케이스는 last가 -1일 때다.
// int count(const int a[], const int comp, int last);
// > Enter input numbers.
// > 3 6 9 3 3 2 3 -1 ([Enter])
// > Enter a number to search.
// > 3 ([Enter])
// > 3 appear 4 times.
#include <stdio.h>
#define MAX 100

int count(const int a[], const int comp, int last) {
    if (last == -1)             // 인덱스가 0인 경우에도 비교해야 하므로 베이스 케이스는 last가 -1일 때
        return 0;
    else if (a[last] == comp)   // 현재의 arr[last]가 comp와 같으면 재귀 호출을 한 값에 1을 더해 리턴
        return 1 + count(a, comp, last - 1);
    else                        // 그렇지 않으면 그냥 재귀 호출 (재귀 호출을 할 때마다 last를 1씩 감소시킴)
        return count(a, comp, last - 1);
}

int main() {

    int i = 0, temp, comp, result, data[MAX];

    printf("Enter input numbers.\n");
    while (1) {
        scanf("%d", &temp);
        if (temp < 0)
            break;
        data[i++] = temp;
    }

    printf("Enter a number to search.\n");
    scanf("%d", &comp);

    result = count(data, comp, i);
    printf("%d appear %d times.\n", comp, result);

    return 0;
}
