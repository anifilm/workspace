/* 15
명령어 라인 인자를 사용하여 정수의 4칙 계산을 하는 프로그램을 작성하라. 단, 컴파일 결과 실행 파일명을 calc.exe라고
가정하고 이 파일을 C: 드라이브 바로 아래로 복사해 놓았을 때 다음과 같은 형식의 입출력이 되도록 해야 한다. 또, 메인
함수는 아래 원형으로 작성해야 한다.
힌트 argv[2]가 가리키는 '+'는 문자형이 아니다. '\0'이 추가된 문자열 혈이므로 *argv[2]로 첫 문자를 접근할 수 있다.
  int main(int argc, char** argv);

  C:/> calc 2 + 3 ([Enter])
  2 + 3 = 5
  C:/> calc 2 x 3 ([Enter])
  2 x 3 = 6
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int first = atoi(argv[1]), second = atoi(argv[3]);
    char op = *argv[2];

    if (op == '+')
        printf("%d %c %d = %d\n", first, op, second, first + second);
    else if (op == '-')
        printf("%d %c %d = %d\n", first, op, second, first - second);
    else if (op == 'x')     // * 입력 처리가 되지 않으므로 x로 처리
        printf("%d %c %d = %d\n", first, op, second, first * second);
    else if (op == '%')     // modulo 이지만 나눗셈으로 처리
        printf("%d %c %d = %d\n", first, op, second, first / second);
    else
        printf("bye~");

    return 0;
}
