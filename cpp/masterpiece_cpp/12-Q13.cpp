/*
Q13
단어가 들어 있는 words.txt 파일을 읽어 단어 별로 vector<string>에 저장하고, 사용자가
입력한 문자열로 시작되는 모든 단어를 출력하는 프로그램을 작성하라. "exit"을 입력하면
프로그램을 종료하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Words {
private:
    ifstream fin;
    vector<string> wordVector;
public:
    Words();
    ~Words();
    bool exist(string word);
    void search(string word);
    void run();
};

Words::Words() {
    fin.open("12-Q12_words.txt");
    if(!fin) {
        cout << "words.txt" << " 열기 실패" << endl;
        exit(0);  // 프로그램 종료
    }
    // words.txt 파일을 읽어 wordVector에 저장
    string word;
    while (getline(fin, word)) {  // 한 라인을 읽어 word에 저장
        wordVector.push_back(word);  // 읽은 단어를 벡터에 삽입
    }
    cout << "... words.txt 파일 로딩 완료" << endl;
}

Words::~Words() { fin.close(); }

bool Words::exist(string word) {  // word가 벡터에 있는 단어인지 확인. 있으면 true 리턴
    for(size_t i = 0; i <wordVector.size(); i++) {  // 벡터 전체를 대상으로 루프
        if (word == wordVector[i])  // word가 벡터에 있으면 true 리턴
            return true;
    }
    return false;
}

void Words::search(string word) {  // 벡터에 word에 한 글자만 다른 모든 단어를 찾아 출력
    size_t length = word.length();
    for (size_t i = 0; i < wordVector.size(); i++) {  // 벡터 전체를 대상으로 루프
        if (wordVector[i].size() == length) {  // word와 길이가 같은 단어만 대상으로 함
            if (word == wordVector[i])
                continue;  // 같은 단어는 비교에서 제외
            for (size_t j = 0; j < length; j++) {  // word의 각 글자에 대해
                string originalTmp = word;
                string secondaryTmp = wordVector[i];
                originalTmp[j] = secondaryTmp[j] = '*';  // 벡터의 단어와 word의 단어에서 i번째 글자를 '*'로 변경
                if (originalTmp == secondaryTmp) {  // 만일 두 단어가 같다면
                    cout << wordVector[i] << endl;  // 두 단어는 j 번째 글자만 다름
                }
            }
        }
    }
}

void Words::run() {
    cout << "검색을 시작합니다. 단어를 입력해 주세요." << endl;
    while (true) {
        cout << "\n단어: ";
        string word;
        getline(cin, word);  // 사용자로부터 한 라인을 읽는다.
        if (word == "exit") {
            cout << "\n프로그램을 종료합니다." << endl;
            return;  // 종료
        }
        if (!exist(word))  // 사용자가 입력한 단어가 벡터에 있는지 확인
            cout << word << "단어 없음. 다시 입력하세요" << endl;
        search(word);  // 벡터에서 word와 한 글자만 다른 단어를 찾아 모두 출력
    }
}

int main() {

    Words w;
    w.run();

    return 0;
}
