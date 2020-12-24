/*
Q5
동일한 크기로 배열을 변환하는 다음 2개의 static 멤버 함수를 가진 ArrayUtility 클래스
를 만들어라.
  static void intToDouble(int source[], double dest[], int size);   // int[]을 double[]로 변환
  static void doubleToInt(double source[], int dest[], int size);   // double[]을 int[]로 변환

ArrayUtility를 활용하는 main()은 다음과 같다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class ArrayUtility {
public:
    static void intToDouble(int source[], double dest[], int size);   // int[]을 double[]로 변환
    static void doubleToInt(double source[], int dest[], int size);   // double[]을 int[]로 변환
};

void ArrayUtility::intToDouble(int source[], double dest[], int size) {
    for (int i = 0; i < size; i++)
        dest[i] = double(source[i]);
}

void ArrayUtility::doubleToInt(double source[], int dest[], int size) {
    for (int i = 0; i < size; i++)
        dest[i] = int(source[i]);
}

int main() {

    int x[] = {1, 2, 3, 4, 5};
    double y[5];
    double z[] = {9.9, 8.8, 7.7, 6.6, 5.5};

    ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]
    for (int i = 0; i < 5; i++)
        cout << y[i] << ' ';
    cout << endl;

    ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
    for (int i = 0; i < 5; i++)
        cout << x[i] << ' ';
    cout << endl;

    return 0;
}
