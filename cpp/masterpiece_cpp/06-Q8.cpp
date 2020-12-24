/*
Q8
디버깅에 필요한 정보를 저장하는 Trace 클래스를 만들어 보자. 저자의 경험에 의하면, 멀티
태스크 프로그램을 개발하거나 특별한 환경에서 작업할 때, Visual Studio의 디버거와 같은
소스 레벨 디버거를 사용하지 못하는 경우가 더러 있었고, 이때 실행 도중 정보를 저장하기
의해 Trace 클래스를 만들어 사용하였다. Trace 클래스를 활용하는 다음 프로그램과 결과를
참고하여 Trace 클래스를 작성하고 전체 프로그램을 완성하라. 디버깅 정보는 100개로 제한
한다.
  (f() 함수, main() 함수 생략...)

*/
#include <iostream>

using namespace std;

class Trace {
private:
    static string tag[100];
    static string debugInfo[100];
    static int size;
public:
    static void put(string tag, string debugInfo);
    static void print(string tag);
};

string Trace::tag[100];
string Trace::debugInfo[100];
int Trace::size = 0;

void Trace::put(string tag, string debugInfo) {
    Trace::tag[size] = tag;
    Trace::debugInfo[size] = debugInfo;
    size++;
}

void Trace::print(string tag = "all") {
    if (tag == "all") {
        cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
        for (int i = 0; i < size; i++)
            cout << Trace::tag[i] << ": " << Trace::debugInfo[i] << endl;
    }
    else {
        cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. -----" << endl;
        for (int i = 0; i < size; i++) {
            if (Trace::tag[i] == tag)
                cout << Trace::tag[i] << ": " << Trace::debugInfo[i] << endl;
        }
    }
}

void f() {
    int a, b, c;
    cout << "두 개의 정수를 입력하세요: ";
    cin >> a >> b;
    Trace::put("f()", "정수를 입력 받았음");  // 디버깅 정보 저장
    c = a + b;
    Trace::put("f()", "합 계산");  // 디버깅 정보 저장
    cout << "합은 " << c << endl;
}

int main() {

    Trace::put("main()", "프로그램을 시작합니다.");  // 디버깅 정보 저장
    f();
    Trace::put("main()", "종료");  // put()의 첫 번째 매개 변수는 태그이고 두 번째 매개 변수는 디버깅 정보 이다.

    Trace::print("f()");  // "f()" 태그를 가진 디버깅 절보를 모두 출력한다.
    Trace::print();       // 모든 디버깅 정보를 출력한다.

    return 0;
}
