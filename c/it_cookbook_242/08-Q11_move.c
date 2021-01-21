/* 11
재귀 호출로 해결할 수 있는 전형적인 문제로 하노이 타워 문제(Hanoi Tower Problem)가 있다. 이는 티베트 승려
들의 놀이로서 X, Y, Z의 말뚝 세 개가 박혀 있고 말뚝 X에 N개의 원반이 쌓여 있을 때 모든 원반을 X에서 Y로
옮기는 놀이다. 단, 한 번에 한 개씩 움직여야 하며 매 순간 지름이 작은 원반은 항상 그보다 지름이 큰 원반 위
에 놓여야 한다. 또, 옮기는 과정에서 임시로 Z를 활용할 수 있다.
  move(N, X, Y, Z) {
      if (N == 1)
          move(1, X, Y, Z);
      else {
          move(N-1, X, Z, Y);
          move(1, X, Y, Z);
          move(N-1, Z, Y, X);
      }
  }

문제 해결을 위한 알고리즘을 의사 코드로 표현하면 예와 같다. 여기서 N은 원반의 수다. 이 역시 재귀 호출로서
N이 하나일 때인 ①이 베이스 케이스다. 하나일 때는 곧바로 그것을 X에서 Y로 옮기면 된다. 베이스 케이스가 아닐
경우를 생각해 보자. 그림을 예로 들면 X의 맨 아래 원반을 제외한 위쪽에 있는 두 개의 원반을 한 덩어리로 간주
할 수 있다. 물론 이를 일반화하면 위쪽에 몇 개가 있더라도 한 덩어리로 간주할 수 있다. ②에 의해 그 한 덩어리
를 일단 X에서 Z로 옮긴다. 어떻게 옮길지는 재귀 호출에 의해 프로그램이 해결할 것이다. 그렇게 하는 과정에서
비어 있는 Y를 임시로 활용할 수 있다. 이후 ③에 의해 맨 아래 원반을 곧바로 X에서 Y로 옮긴다. 이렇게 되면 이제
남은 일은 ④에 의해 Z에 있는 두 개의 원반을 Y로 옮기는 일이다. 또, 그렇게 하는 과정에서 비어 있는 X를 임시로
활용할 수 있다. 알고리즘을 참고로 하노이 타워 문제를 해결하는 프로그램을 작성하라.
  void move(int n, char x, char y, char z)

  > Enter the number of disks.
  > 3 ([Enter])
  > move a disk from X to Y
    move a disk from X to Z
    move a disk from Y to Z
    move a disk form X to Y
    move a disk from Z to X
    move a disk from Z to Y
    move a disk from X to Y
*/
#include <stdio.h>

void move(int n, char x, char y, char z) {
    if (n == 1) {
        // move(1, x, y, z);
        printf("move a disk from %c to %c\n", x, y);
    } else {
        move(n - 1, x, z, y);
        move(1, x, y, z);
        move(n - 1, z, y, x);
    }
}

int main() {

    int num;

    printf("Enter the number of disks.\n");
    scanf("%d", &num);

    move(num, 'X', 'Y', 'Z');

    return 0;
}
