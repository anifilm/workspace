// 문자열 입력받는 함수 만들기
#include <stdio.h>
#include <conio.h>  // getche 함수를 사용하기 위해 추가

void MyGetString(char a_string[]) {
    int i = 0, key = 0;

    while (key != '\r') {   // Enter 키를 누르면 입력 작업을 종료한다
        key = getche();     // 사용자에게 키를 입력 받는다
        if (key != 0 && key != 0x00E0) {
            // 확장 키가 아닌 경우에만 해당 키를 문자열에 추가한다
            if (key != '\r') {  // 확장 키는 아니지만 \r 인 경우에는 문자열을 추가하지 않는다
                a_string[i] = key;
                i++;
            }
        } else {
            key = getche();     // 확장 키는 두개의 키로 구성되기 때문에 두번째 키를 제거한다
        }
    }

    // i가 가리키는 위치가 마지막에 입력한 문자 다음 위치이기 때문에
    // input[i]에 NULL 문자를 넣어서 문자열을 완성한다
    a_string[i] = 0;
}

int main() {

    // 최대 31개의 문자를 입력 받아 저장 할 수 있다
    char input[32];

    MyGetString(input);     // 문자열을 입력 받는 함수
    printf("\nInput string: %s\n", input);    // 입력된 문자열을 출력한다

	return 0;
}
