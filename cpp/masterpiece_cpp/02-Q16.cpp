/*
Q16
영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 프로그램을 작성하라. 대문자는 모두
소문자로 집계하며, 텍스트 입력의 끝은 ';' 문자로 한다.
  (실행의 예 생략...)

*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    const int STR_N = 10000;
    char str[STR_N];
    int num = 0, alphabet[27] = {0};

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다." << STR_N << "개까지 가능합니다." << endl;
    cin.getline(str, STR_N, ';');

    for (size_t i = 0; i < strlen(str); ++i) {
        if (isalpha(tolower(str[i])) != 0) {
            alphabet[tolower(str[i]) - 97]++;
            num++;
        }
    }
    cout << "총 알파벳 수 " << num << endl << endl;
    for (int i = 0; i < 26; i++) {
        char alpha = i + 'a';
        cout << alpha << "(" << alphabet[i] << ")";
        for (int j = 0; j < 4 - alphabet[i] / 10; j++)
            cout << " ";
        cout << ":  ";
        for (int k = 0; k < alphabet[i]; k++)
            cout << "*";
        cout << endl;
    }


    return 0;
}

/*

Wise men say, only fools rush in
But I can't help, falling in love with you.

Shall I stay? Would it be a sin?
If I can't help, falling in love with you.

Like a river flows, surely to the sea
Darling so it goes, some things aren't meant to be ;

*/
