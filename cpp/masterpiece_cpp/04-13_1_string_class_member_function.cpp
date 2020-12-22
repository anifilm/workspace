#include <iostream>

using namespace std;

int main() {

    // 문자열 인덱스 01234567890
    string names = "I study C++";

    cout << names.length() << endl;     //   length = 11
    cout << names.size() << endl;       //     size = 11
    cout << names.capacity() << endl;   // capacity = 15

    return 0;
}

/*

string 클래스의 주요 멤버 함수 (표에서 pos는 문자열 내의 문자 위치로서, 0부터 시작함)

멤버 함수                                               설명
string& append(const string& str)                   문자열 뒤에 str 추가
string& append(const string& str, int pos, int n)   str 문자열 내 pos 위치에서 n개의 문자를 현재 문자열 뒤에 덧붙임
string& insert(int pos, const string& str)          문자열의 pos 위치에 str 삽입
string& replace(int pos, int n, const string& str)  문자열의 pos 위치부터 n개 문자를 str 문자열로 대치
int size()                                          문자열의 길이 리턴, 문자열의 길이는 바이트 수 (영어 문자 개수)
int length()                                        문자열의 길이 리턴, size()와 동일
int capacity()                                      할당된 메모리 크기 리턴
string& erase(int pos, int n)                       pos 위치부터 n개 문자 삭제
void clear()                                        문자열 모두 삭제, 크기를 0으로 만듬
bool empty()                                        문자열의 크기가 0이면 true, 아니면 false 리턴
char& at(int pos)                                   pos 위치의 문자 리턴
int find(const string& str)                         문자열의 처음부터 str을 검색하여 발견한 처음 인덱스 리턴, 없으면 -1 리턴
int find(cosnt string& str, int pos)                문자열의 pos 위치부터 str을 검색하여 발견한 처음 인덱스 리턴, 없으면 -1 리턴
int rfind(const string& str, int pos)               문자열의 pos 위치부터 str을 검색하여 마지막에 발견한 인덱스 리턴, 없으면 -1 리턴
int compare(const string& str)                      문자열과 str을 비교하여 같으면 0을, 사전 순으로 현재 문자열이 앞에 오면 음수, 뒤에 오면 양수 리턴
string substr(int pos, int n)                       pos 위치부터 n개 문자를 새로운 서브스트링으로 생성, 리턴
void swap(string& str)                              현재 객체의 문자열과 str의 문자열을 서로 바꿔치기 함
char* c_str()                                       C-스트링 문자열 리턴

*/
