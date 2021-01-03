/*
Q10
나라의 수도 맞추기 게임에 vector를 활용해보자. 나라 이름(nation)과 수도(capital) 문자열로
구성된 Nation 클래스를 만들고, vector<Nation> v;로 생성한 벡터를 이용하여 나라 이름과 수도
이름을 삽입할 수도 있고 랜덤하게 퀴즈를 볼수도 있다. 프로그램 내에서 벡터에 Nation 객체를
여러 개 미리 삽입하여 퀴즈를 보도록 하라. 실행 화면은 다음과 같으며, 저자는 9개 나라의 이름과
수도를 미리 프로그램에서 삽입하였다. 문자열은 string 클래스를 이용하라.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Nation {
private:
    string nation;
    string capital;
public:
    Nation(string nation, string capital) {
        this->nation = nation; this->capital = capital;
    }
    string getNation() { return nation; }
    string getCapital() { return capital; }
};

int main() {

    vector<Nation> v;
    v.push_back(Nation("미국", "워싱턴"));
    v.push_back(Nation("이탈리아", "로마"));
    v.push_back(Nation("스페인", "마드리드"));
    v.push_back(Nation("영국", "런던"));
    v.push_back(Nation("독일", "베를린"));
    v.push_back(Nation("호주", "멜버른"));
    v.push_back(Nation("대한민국", "서울"));
    v.push_back(Nation("일본", "도쿄"));
    v.push_back(Nation("중국", "베이징"));
    v.push_back(Nation("필리핀", "마닐라"));
    v.push_back(Nation("베트남", "하노이"));
    v.push_back(Nation("태국", "방콕"));
    v.push_back(Nation("몽골", "울란바토르"));
    v.push_back(Nation("그리스", "아테네"));
    v.push_back(Nation("덴마크", "코펜하겐"));
    v.push_back(Nation("네델란드", "암스테르담"));

    srand((unsigned)time(0));

    int choice, question;
    string nation, capital;
    bool is_add;
    string answer;

    cout << "***** 나라의 수도 맞추기 게임을 시작합니다 *****" << endl;

    while (true) {
        cout << "정보입력(1), 퀴즈(2), 종료(3): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
                while (true) {
                    is_add = false;
                    cout << "나라와 수도를 입력하세요.(no no 이면 입력 끝)" << endl;
                    cout << v.size() + 1 << ": ";
                    cin >> nation >> capital;
                    if (nation == "no" || capital == "no") break;
                    for (size_t i = 0; i < v.size(); i++) {
                        if (v.at(i).getNation() == nation) {
                            cout << "already exists!!" << endl;
                            is_add = false;
                            break;
                        }
                        else if (v.at(i).getCapital() == capital) {
                            cout << "already exists!!" << endl;
                            is_add = false;
                            break;
                        }
                        else
                            is_add = true;
                    }
                    if (is_add) v.push_back(Nation(nation, capital));
                }
                break;
            case 2:
                while (true) {
                    question = rand() % v.size();
                    cout << v.at(question).getNation() << "의 수도는? ";
                    cin >> answer;
                    if (answer == "exit") break;
                    else if (answer == v.at(question).getCapital()) cout << "Correct !!" << endl;
                    else cout << "NO !!" << endl;
                }
                break;
            case 3:
                cout << "\n프로그램을 종료합니다." << endl;
                return 0;
        }
    }
}
