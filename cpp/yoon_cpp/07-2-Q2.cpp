/* 문제 07-1 [상속과 생성자의 호출]
문제 2
다음 두 클래스에 적절한 생성자와 소멸자를 정의해 보자. 그리고 이의 확인을 위한 main()
함수를 정의해 보자.
*/
#include <iostream>
#include <cstring>

using namespace std;

class MyFriendInfo {
private:
    char* name;
    int age;
public:
    MyFriendInfo(const char* name, int age)
        : age(age) {
            this->name = new char[strlen(name)+1];
            strcpy(this->name, name);
    }
    ~MyFriendInfo() { delete[] name; }
    void ShowMyFriendInfo() {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
    char* addr;
    char* phone;
public:
    MyFriendDetailInfo(const char* name, int age, const char* addr, const char* phone)
        : MyFriendInfo(name, age) {
            this->addr = new char[strlen(addr)+1];
            this->phone = new char[strlen(phone)+1];
            strcpy(this->addr, addr);
            strcpy(this->phone, phone);
    }
    ~MyFriendDetailInfo() {
        delete[] addr;
        delete[] phone;
    }
    void ShowMyFriendDetailInfo() {
        ShowMyFriendInfo();
        cout << "주소: "  << addr << endl;
        cout << "전화: " << phone << endl;
        cout << endl;
    }
};

int main() {

    MyFriendDetailInfo myFriend1("정흥규", 43, "창원시 팔용동", "010-4004-4862");
    MyFriendDetailInfo myFriend2("서환길", 43, "창원시 중앙동", "010-5555-4455");
    myFriend1.ShowMyFriendDetailInfo();
    myFriend2.ShowMyFriendDetailInfo();

    return 0;
}
