/*
Q9
텍스트 파일을 모두 읽어 다음과 같이 라인을 출력하는 프로그램을 작성하라. 아래는 system.ini
를 사용한 사례이다.
  (실행 결과 생략...)

*/
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

int main() {

    vector<string> lineVector;

    ifstream fin("./12-Q2_system.ini");
    if (!fin) {
        cout << "system.ini 파일을 열 수 없습니다." << endl;
        return 0;  // 열기 오류
    }

    fileRead(lineVector, fin);  // 파일 전체를 lineVector에 라인 별로 읽기
    cout << "system.ini 파일을 읽었습니다." << endl;
    fin.close();

    cout << "\n라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료" << endl;
    size_t line;
    while (true) {
        cout << ">> ";
        cin >> line; cin.ignore();
        if (line < 1)  // 1보다 작은 값을 입력하면 프로그램 종료
            break;
        if (line <= lineVector.size()) {
            cout << lineVector.at(line-1);  // 벡터에서 문자열을 검색하여 출력
            cout << endl;
        }
    }
    cout << "\n프로그램을 종료합니다." << endl;

    return 0;
}
