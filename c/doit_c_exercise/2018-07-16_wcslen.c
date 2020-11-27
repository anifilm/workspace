// 유니코드 한글 사용 테스트
// 터미널은 65001 (UTF-8), 소스 코드페이지 UTF-8
// 멀티바이트로 CP949 사용하면 한글 2바이트로 잘됨
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    const wchar_t* p = L"임채영";          // 출력에 문제가 있다
    int len;
    // setlocale(LC_ALL, "ko_KR.UTF-8");     // 지역코드를 대한민국으로 설정, 잘 안되는 듯
    _wsetlocale(LC_ALL, L"korean");       // 이건 잘 나온다

    len = wcslen(p);                      // 문자 개수는 잘됨, len = 3
    wprintf(L"문자열 [ %s ]의 길이는: %d\n", p, len);

    return 0;
}
