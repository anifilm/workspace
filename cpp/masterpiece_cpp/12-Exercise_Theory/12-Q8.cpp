/* 이론 문제
Q8
다음과 같이 파일을 여는 코드가 있다. 파일 열기가 실패하면 "열기 실패"라고 출력하고
반환하는 if문을 작성하라.

  ofstream fout("song.txt");

*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream fout("song.txt");
    if (!fout) {
        cout << "song.txt 파일을 열수 없습니다.";
        return 0;
    }
    fout.close();
}
