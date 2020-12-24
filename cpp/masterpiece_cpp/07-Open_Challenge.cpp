/*
Open Challenge - 히스토그램 클래스에 <<, ! 연산자 작성
히스토그램을 표현하는 Histogram 클래스를 만들고 <<, ! 연산자를 작성해 보자. Histogram
클래스는 영문자 알파벳만 다루며 대문자를 모두 소문자로 변환하여 처리한다. Histogram
클래스를 활용하는 코드 사례는 다음과 같다.
    (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Histogram {
private:
    string words;
public:
    Histogram(string words) { this->words = words; }
    Histogram& operator<<(string words);
    Histogram& operator<<(char ch);
    void operator!();
};

Histogram& Histogram::operator<<(string words) {
    this->words += words;
    return *this;
}

Histogram& Histogram::operator<<(char ch) {
    this->words += ch;
    return *this;
}

void Histogram::operator!() {
    cout << words << endl;

    int num = 0, alphabet[27] = {0};

    for (size_t i = 0; i < words.length(); i++) {
        if (isalpha(tolower(words[i])) != 0) {
            alphabet[tolower(words[i]) - 97]++;
            num++;
        }
    }
    cout << "\n총 알파벳 수 " << num << endl << endl;
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
}

int main() {

    Histogram song("Wise men say, only fools rush in But I can't help, \n");
    song << "falling" << " in love with you." << " - by ";  // 히스토그램에 문자열 추가
    song << 'k' << 'i' << 't';  // 히스토그램에 문자 추가
    !song;  // 히스토그램 그리기

    return 0;
}
