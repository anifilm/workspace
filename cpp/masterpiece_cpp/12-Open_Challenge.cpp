/*
Open Challenge - 행맨(HangMan) 게임 만들기
간단한 행맨 게임을 만들어 보자. 프로그램은 사용자 모르게 영어 단어 하나를 선택하고 몇 개의
글자를 숨긴 다음 화면에 출력하여, 사용자에게 이 단어를 맞추게 하는 게임이다. 숨긴 글자의
개수가 많을수록 나이도가 높다. 이 도전 주제에서는 2개의 글자만 숨기도록 하라. 한 단어에서
5번 틀리면 프로그램을 종료하라. 행맨 프로그램에 사용되는 단어 파일은 독자들에게 배포된
words.txt 파일을 이용하라. 이 파일에는 한 줄에 하나의 영어 단어만 적혀있다.
  (실행 결과 생략...)

*/
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void showStart() {
    for (int i = 0; i < 6; i++)
        cout << "------";
    cout << endl;
    cout << "지금부터 행맨 게임을 시작합니다." << endl;
    for (int i = 0; i < 6; i++)
        cout << "------";
    cout << endl;
}

void fileRead(vector<string>& v, ifstream& fin) {  // fin 파일 전체를 벡터 v에 읽어들임
    string line;
    while(getline(fin, line)) {  // fin 파일에서 한 라인 읽기
        v.push_back(line);  // 읽은 라인을 벡터에 저장
    }
}

string getWord(vector<string>& v) {
    int n = rand() % 25143;
    return v[n];
}

string guessWord(string word) {
    for (int i = 0; i < 2; i++) {
        int n = rand() % word.size();
        word.at(n) = '-';
    }
    return word;
}

int main() {

    srand((unsigned)time(0));
    vector<string> wordVector;

    ifstream fin("./12-6_words.txt");
    if (!fin) {
        cout << "words.txt 파일을 열 수 없습니다." << endl;
        return 0;  // 열기 오류
    }

    fileRead(wordVector, fin);  // 파일 전체를 wordVector에 라인 별로 읽기
    fin.close();

    showStart();
    while (true) {
        string hang_word = getWord(wordVector);  // 벡터에서 단어를 하나 가져옴
        string guess_word = guessWord(hang_word);  // 2개의 글자를 숨김
        // 다섯번의 입력 기회
        int i; char word;
        for (i = 0; i < 5; i++) {
            cout << guess_word << endl;
            cout << ">> ";
            cin >> word; cin.ignore();
            for (size_t i = 0; i < hang_word.size(); i++) {
                if (guess_word.at(i) == '-' && hang_word.at(i) == word) {
                    guess_word.at(i) = hang_word.at(i);
                    break;
                }
            }
            if (guess_word == hang_word)
                break;
        }
        if (i == 5) {
            cout << "5번 실패 하였습니다." << endl;
        }
        cout << hang_word << endl;
        string again;
        cout << "\nNext(y/n)? ";
        getline(cin, again);
        if (again == "n") break;
    }
    cout << "\n프로그램을 종료합니다." << endl;

    return 0;
}
