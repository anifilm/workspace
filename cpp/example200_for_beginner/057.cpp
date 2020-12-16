// 문자열 합치기 (+=)
#include <iostream>

using namespace std;

int main() {

    string king = "조선 세종";
    string favorite1 = "고기";
    string facorite2 = "야근";

    string king_info = 0;

    king_info += king;
    king_info += "은 ";
    king_info += favorite1;
    king_info.append("와 ");
    king_info.append(facorite2);
    king_info.append("을 좋아했습니다.");

    cout << king_info << endl;

    return 0;
}
