// getline(ifstream&, string&)으로 word.txt 파일을 읽고 단어 검색
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {  // fin 파일 전체를 벡터 v에 읽어들임
    string line;
    while(getline(fin, line)) {  // fin 파일에서 한 라인 읽기
        v.push_back(line);  // 읽은 라인을 벡터에 저장
    }
}

void search(vector<string>& v, string word) {  // 벡터 v에서 word를 찾아 출력
    for (size_t i = 0; i < v.size(); i++) {
        int index = v[i].find(word);  // v[i] 단어가 word 문자열을 포함하는지 검사. -1이 반환되면 포함하지 않음
        if (index != -1)
            cout << v[i] << endl;
    }
}

int main() {

    vector<string> wordVector;

    ifstream fin("./12-6_words.txt");
    if (!fin) {
        cout << "words.txt 파일을 열 수 없습니다." << endl;
        return 0;  // 열기 오류
    }

    fileRead(wordVector, fin);  // 파일 전체를 wordVector에 라인 별로 읽기
    fin.close();

    cout << "words.txt 파일을 읽었습니다." << endl;
    while (true) {
        cout << "\n검색할 단어를 입력하세요: ";
        string word;
        getline(cin, word);  // 키보드로부터 문자열 읽기
        if (word == "exit")  // exit을 입력하면 프로그램 종료
            break;
        search(wordVector, word);  // 벡터에서 문자열을 검색하여 출력
    }
    cout << "\n프로그램을 종료합니다." << endl;

    return 0;
}

/*

텍스트 파일의 줄 단위 읽기

- char 사용시
istream getline(char* line, int n)

- string 사용시
ifstream& getline(ifstream& fin, string& line)

*/
