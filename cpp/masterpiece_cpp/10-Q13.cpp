/*
Q13
map 컨테이너를 이용하여 (이름, 성적)을 저장하고 이름으로 성적을 조회하는 점수 관리 프로그램을
만들어라. 이름은 빈칸 없이 입력하는 것을 원칙으로 한다.
  (실행 결과 생략...)

*/
#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> dic;  // 맵 컨테이너 생성. 키는 이름, 값은 성적

    // 4명의 성적을 map에 저장
    dic.insert(make_pair("임채영", 92));
    dic.insert(make_pair("정흥규", 88));
    dic["서환길"] = 74;
    dic["안재훈"] = 87;

    cout << "***** 점수 관리 프로그램 High Score를 시작합니다 *****" << endl;

    cout << "저장된 학생의 수: " << dic.size() << endl;
    int menu, score;
    string name;

    while (true) {
        cout << "입력(1), 조회(2), 종료(3): ";
        cin >> menu; cin.ignore();
        if (menu == 1) {
            cout << "이름과 성적: ";
            cin >> name >> score;
            if (dic.find(name) == dic.end()) // name '키'를 끝가지 찾았는데 없으면
                dic.insert(make_pair(name, score));
            else
                cout << "이미 등록된 학생이 존재합니다." << endl;
        }
        else if (menu == 2) {
            cout << "이름: ";
            getline(cin, name);
            if (dic.find(name) == dic.end())  // name '키'를 끝까지 찾았는데 없으면
                cout << name << " 학생을 찾을 수 없습니다." << endl;
            else
                cout << name << "의 점수는 " << dic[name] << endl;  // dic에서 name의 값을 찾아 출력
        }
        else
            break;
    }
    cout << "\n프로그램을 종료합니다." << endl;

    return 0;
}
