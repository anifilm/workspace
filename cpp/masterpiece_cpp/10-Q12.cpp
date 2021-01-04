/*
Q12
Open Challenge를 수정하여 사용자가 어휘를 삽입할 수 있도록 기능을 추가하라. 실행 예는 다음과
같다.
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
    // 메뉴 선택
    int menu_select;
    // 어휘 추가
    string word_en, word_ko;
    bool is_same;
    // 어휘 테스트
    int n1;
    string answer;
    string bogi[4];
    int number[4];

    cout << "***** 영어 어휘 테스트를 시작합니다 *****" << endl;
    // 메뉴 선택
    while (true) {
        cout << "어휘 삽입(1), 어휘 테스트(2), 프로그램 종료(그외키): ";
        cin >> menu_select;
        if (menu_select == 1) {
            // 어휘 추가
            cout << "영어 단어에 exit를 입력하면 입력 종료" << endl;
            while (true) {
                is_same = false;
                cout << "영어: ";
                cin >> word_en;
                if (word_en == "exit") break;
                cout << "한글: ";
                cin >> word_ko;
                if (word_ko == "exit") break;
                // 중복 단어 확인
                for (size_t i = 0; i < v.size(); i++) {
                    if (v.at(i).getEn() == word_en) {
                        cout << "같은 영어 단어가 있습니다." << endl;
                        is_same = true;
                        break;
                    }
                    else if (v.at(i).getKo() == word_ko) {
                        cout << "같은 한글 단어가 있습니다." << endl;
                        is_same = true;
                        break;
                    }
                    else
                        is_same = false;
                }
                if (!is_same) v.push_back(Word(word_en, word_ko));
            }
        }
        else if (menu_select == 2) {
            // 어휘 테스트
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
                    cout << "어휘 테스트 종료" << endl;
                    cout << endl;
                    break;
                }
                else if (answer == bogi[number[result - 1]])
                    cout << "Excellent !!" << endl;
                else if (result == 1 || result == 2 || result == 3 || result == 4)
                    cout << "No. !!" << endl;
            }
        }
        else {
            // 종료
            cout << "\n프로그램을 종료합니다." << endl;
            break;
        }
    }

    return 0;
}
