/*
Q13
영문자로 구성된 텍스트에 대해 각 알파벳에 해당하는 문자가 몇 개인지 출력하는 히스토그램
클래스 Histogram을 만들어 보자. 대문자는 모두 소문자로 변환하여 처리한다.
Histogram 클래스를 활용하는 사례와 실행 결과는 다음과 같다.
  (활용 사례, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Histogram {
private:
    string words;
public:
    Histogram(string words) { this->words = words + '\n'; }
    void put(string words);
    void putc(char ch);
    void print();
};

void Histogram::put(string words) {
    this->words += words;
}

void Histogram::putc(char ch) {
    this->words += ch;
}

void Histogram::print() {
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

    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();

    return 0;
}
