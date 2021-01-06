// 스트림 상태 검사
#include <iostream>
#include <fstream>

using namespace std;

void showStreamState(ios& stream) {
    cout << "eof() " << stream.eof() << endl;
    cout << "fail() " << stream.fail() << endl;
    cout << "bad() " << stream.bad() << endl;
    cout << "good() " << stream.good() << endl;
}

int main() {

    const char* noExistFile = "./12-11_noexist.txt";  // 존재하지 않는 파일명
    const char* existFile = "./12-1_student.txt";  // 존재하는 파일명

    ifstream fin(noExistFile);  // 존재하지 않는 파일 열기
    if (!fin) {  // 열기 실패 검사
        cout << noExistFile << " 열기 오류" << endl;
        showStreamState(fin);  // 스트림 상태 출력
        cout << endl;

        cout << existFile << " 파일 열기" << endl;
        fin.open(existFile);
        showStreamState(fin);  // 스트림 상태 출력
    }
    cout << endl;

    // 스트림을 끝까지 읽고 화면에 출력
    int ch;
    while ((ch = fin.get()) != EOF)
        cout.put(char(ch));
    cout << endl;

    showStreamState(fin);  // 스트림 상태 출력

    fin.close();
    return 0;
}

/*

스트림의 상태를 나타내는 각 비트

비트          설명
eofbit      파일의 끝을 만났을 때 1로 셋팅
failbit     정수를 입력받고자 하였으나 문자열이 입력되는 등 포맷 오류나, 쓰기 금지된 곳에 쓰기를 시행하는 등 전반적인 I/O 실패 시에 1로 셋팅
badbit      스트림이나 데이터가 손상되는 수준의 진단되지 않는 문제가 발생한 경우나 유효하지 않는 입출력 명령이 주어졌을 때 1로 셋팅


스트림의 상태를 검사하는 멤버 함수

멤버 함수       설명
eof()       파일의 끝을 만났을 때(eofbit=1) true 반환
fail()      failbit나 badbit가 1로 셋팅되었을 때 true 반환
bad()       badbit이 1로 셋팅되었을 때 true 반환
good()      스트림이 정상적(모든 비트가 0)일 때 true 반환
clear()     스트림 상태 변수를 0으로 지움

*/
