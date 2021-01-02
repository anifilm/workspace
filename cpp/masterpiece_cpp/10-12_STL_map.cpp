// map으로 영한 사전 만들기
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    map<string, string> dic;  // 맵 컨테이너 생성. 키는 영어 단어, 값은 한글 단어

    // 단어 3개를 map에 저장
    dic.insert(make_pair("love", "사랑"));
    dic.insert(make_pair("apple", "사과"));
    dic["cherry"] = "체리";

    cout << "저장된 단어 개수: " << dic.size() << endl;
    string eng;
    while (true) {
        cout << "찾고 싶은 단어: ";
        getline(cin, eng);  // 사용자로부터 단어 입력받음
        if (eng == "exit") break;
        if (dic.find(eng) == dic.end())  // eng '키'를 끝까지 찾았는데 없으면
            cout << "단어를 찾을수 없습니다." << endl;
        else
            cout << dic[eng] << endl;  // dic에서 eng의 값을 찾아 출력
    }
    cout << "\n프로그램을 종료합니다." << endl;

    return 0;
}
