// 문자열을 정수로 변환하기 (stoi, stof)
#include <iostream>

using namespace std;

int main() {

    string str1 = "10";
    string str2 = "2.456";
    string str3 = "789 문자열";

    int num1 = stoi(str1);
    // int num2 = stoi(str2);
    double num2 = stof(str2);
    int num3 = stoi(str3);

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;

    return 0;
}

/*

stoi: string to integer
stof: string to float

*/
