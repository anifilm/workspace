/*
Open Challenge 영문 텍스트와 모스(Morse) 부호 변환기
아래 <표 5-1>을 참고형 영문 텍스트, 숫자, 몇 개의 특수 문자로 구성되는 텍스트를 모스
부호로 변환하는 프로그램을 작성하라. 모스 부호는 전보를 쳐서 통신하는 시절에 사용된
유명한 코딩 시스템이다. 각 모스 코드들은 하나의 빈칸으로 분리되고, 영문 한 워드가 모스
워드로 변환되면 워드들은 3개의 빈칸으로 분리된다. 실행 예는 다음과 같다. 영문 텍스트를
입력받아 모스 부호로 변환하여 출력하고, 변환이 잘 되었는지 확인하기 위해 다시 모스 부호
를 영문 텍스트로 변환하여 원문을 출력한 사례이다.
  (실행 결과, <표 5-1> 생략...)

*/
#include <iostream>

using namespace std;

class Morse {
    string alphabet[26];    // 알파벳의 모스 부호 저장
    string digit[10];       // 숫자의 모스 부호 저장
    string slash, question, comma, period, plus, equal; // 특수 문자의 모스 부호 저장
public:
    Morse();    // alphabet[], digit[] 배열 및 특수 문자의 모스 부호 초기화
    void text2Morse(string text, string& morse);    // 영문 텍스트를 모스 부호로 변환
    bool morse2Text(string morse, string& text);    // 모스 부호를 영문 텍스트로 변환
};

Morse::Morse() {
    alphabet[0] = ".-"; alphabet[1] = "-..."; alphabet[2] = "-.-."; alphabet[3] = "-..";
    alphabet[4] = "."; alphabet[5] = "..-."; alphabet[6] = "--."; alphabet[7] = "....";
    alphabet[8] = ".."; alphabet[9] = ".---"; alphabet[10] = "-.-"; alphabet[11] = ".-..";
    alphabet[12] = "--"; alphabet[13] = "-."; alphabet[14] = "---"; alphabet[15] = ".--.";
    alphabet[16] = "--.-"; alphabet[17] = ".-."; alphabet[18] = "..."; alphabet[19] = "-";
    alphabet[20] = "..-"; alphabet[21] = "...-"; alphabet[22] = ".--"; alphabet[23] = "-..-";
    alphabet[24] = "-.--"; alphabet[25] = "--..";
    digit[0] = "-----"; digit[1] = ".----"; digit[2] = "..---"; digit[3] = "...--"; digit[4] = "....-";
    digit[5] = "....."; digit[6] = "-...."; digit[7] = "--..."; digit[8] = "---.."; digit[9] = "----.";
    slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-"; plus = ".-.-"; equal = "-...-";
}

void Morse::text2Morse(string text, string& morse) {
    char buffer;
    for (size_t i = 0; i < text.length(); i++) {
        buffer = text.at(i);
        if (buffer == ' ')
            morse.append("  ");
        else if (buffer >= 'a' && buffer <= 'z')
            morse.append(alphabet[buffer-97]).append(" ");
        else if (buffer >= '0' && buffer <= '9')
            morse.append(digit[buffer-48]).append(" ");
        else {
            if (buffer == '/')
                morse.append(slash).append(" ");
            else if (buffer == '?')
                morse.append(question).append(" ");
            else if (buffer == ',')
                morse.append(comma).append(" ");
            else if (buffer == '.')
                morse.append(period).append(" ");
            else if (buffer == '+')
                morse.append(plus).append(" ");
            else if (buffer == '=')
                morse.append(equal).append(" ");
        }
    }
}

bool Morse::morse2Text(string morse, string& text) {
    string srcText = text;
    text = "";
    string buffer;
    for (size_t i = 0; i < morse.length(); i++) {
        if (morse[i] == ' ' && morse[i+1] == ' ') {
            text += ' ';
            i++;
            continue;
        }
        buffer = "";
        while (morse[i] != ' ') {
            buffer += morse[i];
            i++;
        }
        for (size_t j = 0; j < 26; j++) {
            if (buffer == alphabet[j]) {
                text += (j+97);
                break;
            }
        }
        for (size_t j = 0; j < 9; j++) {
            if (buffer == digit[j]) {
                text += (j+48);
                break;
            }
        }
        if (buffer == slash)
            text += '/';
        else if (buffer == question)
            text += '?';
        else if (buffer == comma)
            text += ',';
        else if (buffer == period)
            text += '.';
        else if (buffer == plus)
            text += '+';
        else if (buffer == equal)
            text += '=';
    }
    if (srcText == text) return true;
    else return false;
}

int main() {

    Morse m;

    string text, morse;
    cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
    getline(cin, text, '\n');

    m.text2Morse(text, morse);
    cout << morse << endl;

    cout << "\n모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
    if (m.morse2Text(morse, text))
        cout << text << endl;
    else
        cout << "모스 부호 -> 텍스트 변환 에러" << endl;

    return 0;
}
