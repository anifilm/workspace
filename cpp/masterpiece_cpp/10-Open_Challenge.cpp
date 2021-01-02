/*
Open Challenge - 영어 어휘 테스트 프로그램 작성
영어 단어의 뜻 맞추기 게임을 만들어 보자. 영어 단어와 한글 단어로 구성되는 Word 클래스를
작성하고 vector<Word> v;로 벡터를 생성하고, 프로그램 내에서 여러 개의 Word 객체를 벡터
에 삽입해 둔다. 그리고 다음 화면과 같이 랜덤하게 사용자에게 문제를 던지며, 4개의 한글
보기를 출력한다. 4개의 보기 중 정답을 제외한 3개는 벡터에 있는 단어 중에서 랜덤하게 선택
한다. 이 문제에서 iterator는 사용할 필요 없다.
  (실행 결과 생략...)

*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Word {
private:
    string en;
    string ko;
public:
    Word(string en, string ko) {
        this->en = en; this->ko = ko;
    }
    string getEn() { return en; }
    string getKo() { return ko; }
};

int main() {

    vector<Word> v;
    v.push_back(Word("human", "인간"));
    v.push_back(Word("society", "사회"));
    v.push_back(Word("dall", "인형"));
    v.push_back(Word("emotion", "감정"));
    v.push_back(Word("painting", "그림"));
    v.push_back(Word("love", "사랑"));
    v.push_back(Word("lover", "애인"));
    v.push_back(Word("trade", "거래"));
    v.push_back(Word("animal", "동물"));
    v.push_back(Word("photo", "사진"));
    v.push_back(Word("bear", "곰"));

    srand((unsigned)time(0));
    int n1;
    string answer;
    string bogi[4];
    int number[4];

    cout << "영어 어휘 테스트를 시작합니다. 1~4외 다른 입력시 종료합니다." << endl;

    while (true) {
        n1 = rand() % v.size();
        bogi[0] = v.at(n1).getKo();
        answer = bogi[0];
        cout << v.at(n1).getEn() << '?' << endl;

        while (true) {  // 중복되지 않는 보기 만들기
            for (int i = 1; i < 4; i++) {
                n1 = rand() % v.size();
                bogi[i] = v.at(n1).getKo();
            }
            if (bogi[0] != bogi[1] && bogi[0] != bogi[2] && bogi[0] != bogi[3] &&
                bogi[1] != bogi[2] && bogi[1] != bogi[3] && bogi[2] != bogi[3])
                break;
        }

        number[0] = rand() % 4;
        while (true) {  // 보기 순서 섞기
            for (int i = 1; i < 4; i++)
                number[i] = rand() % 4;
            if (number[0] != number[1] && number[0] != number[2] && number[0] != number[3] &&
                number[1] != number[2] && number[1] != number[3] && number[2] != number[3])
                break;
        }

        int result;
        for (int i = 1; i < 5; i++)
            cout << "(" << i << ") " << bogi[number[i - 1]] << " ";
        cout << ": ";
        cin >> result;

        if (result != 1 && result != 2 && result != 3 && result != 4) {  // 순서 중요 먼저 1, 2, 3, 4 이외의 값인지 확인해야함
            cout << "프로그램을 종료합니다." << endl;
            break;
        }
        else if (answer == bogi[number[result - 1]])
            cout << "Excellent !!" << endl;
        else if (result == 1 || result == 2 || result == 3 || result == 4)
            cout << "No. !!" << endl;
    }

    return 0;
}
