/* 14
이미 정렬된 두 개의 배열을 정렬 순서를 유지하면서 합병(Merge)하는 과정은 위 그림과 같다. a, b 배열에 별도의 포인터를
사용하여 처음에는 배열 첫 요소인 a1, b1에 위치시킨다. 이후 두 포인터가 가리키는 값을 비교한다. a1이 가리키는 1이 b2이
가리키는 2보다 작으니 1을 배열 m에 옮겨 적는다. 옮기자마자 a1은 a2로 이동한다. 이제 a2와 b1을 비교하니 b1이 작다.
따라서 b1을 m에 옮겨 적고 a3로 이동한다. 그 순간 a 배열은 더이상 합병할 것이 없다. 따라서 b 배열에 남아있는 b2, b3를
그대로 순차적으로 m으로 옮겨 적으면 된다. 이렇게 할 수 있는 이유는 b 배열 자체가 이미 정렬된 상태이기 때문이다.
a, b, m 세 개의 동적 배열을 선언하라. a, b의 크기는 다를 수 있으나 m의 크기는 a, b의 크기를 합한 것이라야 한다. 이후
a, b 배열에 정렬된 순서로 입력을 하도록 요구한 다음 그것을 합병하여 m 배열에 저장하고 내용을 출력하라. 단, 프로그램
전체에 배열 기호를 써서는 안 된다.
힌트 a, b 배열 중 무엇이 작으냐에 따라 코드를 달리해야 한다. a, b 포인터가 a++, b++로 전진하면 거기에 따라 m 포인터도
m++로 전진한다. a, b, m 포인터는 계속 움직이므로 나중에 free할 것에 대비해서 시작 주소인 a, b, m 포인터를 미리 복사해
두어야 한다.
  > Enter number of elements in array a.
  > 3 ([Enter])
  > Enter data to be inserted in array a. It must be in sorted order.
  > 1 3 8 ([Enter])
  > Enter number of elements in array b.
  > 5 ([Enter])
  > Enter data to be inserted in array b. It must be in sorted order.
  > 2 3 4 7 9 ([Enter])
  > Result of merging is,
  > 1 2 3 3 4 7 8 9
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, k, a_len, b_len, *a, *b, *m;

    printf("Enter number of elements in array a.\n");
    scanf("%d", &a_len);

    a = (int*)malloc(sizeof(int) * a_len);
    if (a == NULL)
        exit(1);
    else {
        printf("Enter data to be inserted in array a. It must be in sorted order.\n");
        for(i = 0; i < a_len; i++)
            scanf("%d", &a[i]);
    }
    while ((getchar()) != '\n');

    printf("Enter number of elements in array b.\n");
    scanf("%d", &b_len);

    b = (int*)malloc(sizeof(int) * b_len);
    if (b == NULL)
        exit(1);
    else {
        printf("Enter data to be inserted in array b. It must be in sorted order.\n");
        for(j = 0; j < b_len; j++)
            scanf("%d", &b[j]);
    }

    m = (int*)malloc(sizeof(int) * (a_len + b_len));

    i = j = k = 0;
    while (1) {
        if (a[i] < b[j]) {
            if (i < a_len) {
                m[k] = a[i];
                i++;
                k++;
            } else {
                m[k] = b[j];
                j++;
                k++;
            }
        } else {
            if (j < b_len) {
                m[k] = b[j];
                j++;
                k++;
            } else {
                m[k] = a[i];
                i++;
                k++;
            }
        }
        if (k > (a_len + b_len)) break;
    }

    for (i = 0; i < (a_len + b_len); i++)
        printf("%d ", m[i]);
    printf("\n");

    free(a);
    free(b);
    free(m);

    return 0;
}
