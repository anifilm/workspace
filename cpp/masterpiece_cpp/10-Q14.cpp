/*
Q14
암호 관리 응용프로그램을 map을 이용하여 작성하라. 실행 과정은 다음과 같다.
  (실행 결과 생략...)

*/
#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, string> dic;  // 맵 컨테이너 생성. 키는 아이디, 값은 패스워드

    // 아이디 4개의 암호를 map에 저장
    dic.insert(make_pair("anifilm", "lcy0200"));
    dic.insert(make_pair("c++", "best"));
    dic["java"] = "hello";
    dic["python"] = "world";

    cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;

    cout << "저장된 암호의 수: " << dic.size() << endl;
    int menu;
    string id, password;

    while (true) {
        cout << "삽입(1), 검사(2), 종료(3): ";
        cin >> menu; cin.ignore();
        if (menu == 1) {
            cout << "아이디와 암호: ";
            cin >> id >> password;
            if (dic.find(id) == dic.end()) // id '키'를 끝가지 찾았는데 없으면
                dic.insert(make_pair(id, password));
            else
                cout << "이미 등록된 아이디가 존재합니다." << endl;
        }
        else if (menu == 2) {
            cout << "아이디: ";
            getline(cin, id);
            if (dic.find(id) == dic.end())  // name '키'를 끝까지 찾았는데 없으면
                cout << "등록된 아이디를 찾을 수 없습니다." << endl;
            else {
                while (true) {
                    cout << "암호: ";
                    getline(cin, password);
                    if (dic[id] == password) {  // dic에서 id의 암호 값을 찾아 비교
                        cout << "통과!!" << endl;
                        break;
                    }
                    else
                        cout << "실패~~~" << endl;
                }
            }
        }
        else
            break;
    }
    cout << "\n프로그램을 종료합니다." << endl;

    return 0;
}
