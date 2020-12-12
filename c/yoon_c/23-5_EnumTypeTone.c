// 열거형의 정의와 변수의 선언
#include <stdio.h>

typedef enum syllable {     // typedef 선언이 추가된 열거형의 정의
    Do = 1,
    Re,
    Mi,
    Fa,
    So,
    La,
    Ti,
    HiDo
} Syllable;

void Sound(Syllable sy) {
    switch(sy) {
        case Do:
            puts("도는 하얀 도라지 ♪"); return;
        case Re:
            puts("레는 둥근 레코드 ♩"); return;
        case Mi:
            puts("미는 파란 미나리 ♩♪"); return;
        case Fa:
            puts("파는 예쁜 파랑새 ♪♭"); return;
        case So:
            puts("솔은 작은 솔방울 ♩♪♪"); return;
        case La:
            puts("라는 라디오고요~ ♪♩♭♩"); return;
        case Ti:
            puts("시는 졸졸 시냇물 ♩♭♩♪"); return;
    }
    puts("\n다 함께 부르세~ 도레미파 솔라시도 솔 도~ 짠~");
}

int main() {

    Syllable tone;

    for (tone = Do; tone <= Ti; tone += 1)
        Sound(tone);

    Sound(HiDo);

    return 0;
}
