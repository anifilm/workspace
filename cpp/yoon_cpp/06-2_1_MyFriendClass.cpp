// 클래스의 friend 선언
#include <iostream>
#include <cstring>

using namespace std;

class Girl;  // Girl이라는 이름이 클래스의 이름임을 알림

class Boy {
private:
    int height;
public:
    Boy(int len) : height(len) {}
    void ShowYourFriendInfo(Girl& frn);
    friend class Girl;  // Girl 클래스에 대한 friend 선언
};

class Girl {
private:
    char phNum[20];
public:
    Girl(const char* num) {
        strcpy(phNum, num);
    }
    void ShowYourFriendInfo(Boy& frn);
    friend class Boy;  // Boy 클래스에 대한 friend 선언
};

void Boy::ShowYourFriendInfo(Girl& frn) {
    cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn) {
    cout << "His height: " << frn.height << endl;
}

int main() {

    Boy boy(170);
    Girl girl("010-8731-2354");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);

    return 0;
}
