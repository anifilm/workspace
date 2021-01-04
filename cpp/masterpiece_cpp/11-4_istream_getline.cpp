// istream의 getline() 함수로 한 줄 읽기
#include <iostream>
#include <cstring>  // strcmp() 함수를 사용하기 위함

using namespace std;

int main() {

    cout << "cin.getline() 함수로 라인을 읽습니다.\n" << endl;
    cout << "종료하려면 exit을 입력하세요" << endl;

    char line[80];
    int no = 1;  // 라인 번호

    while (true) {
        cout << "라인 " << no << ": ";
        cin.getline(line, 80);  // 한 라인의 문자열 읽기. 79개 까지 문자를 읽음
        if (strcmp(line, "exit") == 0) {
            cout << "\n프로그램을 종료합니다." << endl;
            break;
        }
        cout << "echo >> ";
        cout << line << endl;  // 읽은 라인을 화면에 출력
        no++;  // 라인 번호 증가
    }

    return 0;
}

/*

한줄 읽기

istream& get(char* s, int n, char delim='\n')
  입력 스트림으로부터 최대 n-1개의 문자를 읽어 배열 s에 저장하고 마지막에 '\0' 문자 삽입.
  입력 도중 delim에 지정된 구분 문자를 만나면 지금까지 읽은 문자를 배열 s에 저장하고 반환

istream& getline(char* s, int n, char delim='\n')
  get()과 동일. 하지만 delim에 지정된 구분 문자를 스트림에서 제거

char line[80];
cin.getline(line, 80);  // '\n'을 만날 때까지 최대 79개의 문자를 읽어 line에 저장하고
                        // 마지막에 '\0'을 추가한다. '\n'을 line에 포함시키지 않고 스트림 버퍼에서 제거한다.


입력 스트림의 문자 건너 뛰기

istream& ignore(int n=1, int delim=EOF)
  입력 스트림에서 n개 문자 제거. 도중에 delim 문자를 만나면 delim 문자를 제거하고 값 반환

cin.ignore(10);  // 입력 스트림에서 10개의 문자 제거
cin.ignore(10, '\n');  // 입력 스트림에서 10개의 문자 제거. 제거 도중 '\n'을 만나면 '\n'을 제거하고 중단


읽은 문자 개수 알아내기

int gcount()
  최근에 입력 스트림에서 읽은 바이트 수 (문자의 개수)를 반환. <Enter> 키도 개수에 포함

char line[80];
cin.getline(line, 80);
int n = cin.gcount();  // cin.getline()에서 읽은 문자의 개수 반환

"Hello<Enter>" 입력시
cin.getline(line, 80)에서 읽어들인 문자 개수는 6 -> "Hello\n" -> line[]에 저장시 '\n'을 '\0'으로 바꾸어 문자열 저장
line[] = "Hello\0"  저장된 문자의 길이는 5

char line[80];
cin.get(line, 80);
int n = cin.gcount();  // cin.get()에서 읽은 문자의 개수 반환

"Hello<Enter>" 입력시
cin.get(line, 80)에서 읽어들인 문자 개수는 5 -> "Hello" -> line[]에 '\0'을 추가하여 문자열 저장 ('\n'은 스트림 버퍼에 남아있다)
line[] = "Hello\0"  저장된 문자의 길이는 5

*/
