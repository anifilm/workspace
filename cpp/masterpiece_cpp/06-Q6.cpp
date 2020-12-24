/*
Q6
동일한 크기의 배열을 변환하는 다음 2개의 static 멤버 함수를 가진 ArrayUtility2 클래스
를 만들고, 이 클래스를 이용하여 아래 결과와 같이 출력되도록 프로그램을 완성하라.
  // s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 반환
  static int* concat(int s1[], int s2[], int size);

  // s2에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 반환
  // 반환하는 배열의 크기는 retSize에 전달. retSize가 0인 경우 NULL을 반환
  static int* remove(int s1[], int s2[], int size, int& retSize);

  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class ArrayUtility2 {
public:
    // s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 반환
    static int* concat(int s1[], int s2[], int size);

    // s2에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 반환
    // 반환하는 배열의 크기는 retSize에 전달. retSize가 0인 경우 NULL을 반환
    static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
    int* n = new int[size*2];
    for (int i = 0; i < size; i++)
        n[i] = s1[i];
    for (int i = 0; i < size; i++)
        n[i+size] = s2[i];
    return n;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
    int* n = new int[size];
    int tmp;
    bool isSame;
    retSize = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (s1[i] == s2[j]) {
                isSame = true;
                break;
            } else {
                tmp = s1[i];
                isSame = false;
            }
        }
        if (!isSame) {
            n[retSize] = tmp;
            retSize++;
        }
    }
    if (retSize == 0) return NULL;
    return n;
}

int main() {

    int x[5], y[5], *z, retSize;

    cout << "정수를 5개 입력하라. 배열 x에 삽입한다: ";
    for (int i = 0; i < 5; i++)
        cin >> x[i];

    cout << "정수를 5개 입력하라. 배열 y에 삽입한다: ";
    for (int i = 0; i < 5; i++)
        cin >> y[i];

    z = ArrayUtility2::concat(x, y, 5);
    cout << "합친 정수 배열을 출력한다." << endl;
    for (int i = 0; i < 10; i++)
        cout << z[i] << ' ';
    cout << endl;

    z = ArrayUtility2::remove(x, y, 5, retSize);
    cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
    for (int i = 0; i < retSize; i++)
        cout << z[i] << ' ';
    cout << endl;

    return 0;
}
