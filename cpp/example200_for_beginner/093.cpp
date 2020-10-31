// 파일을 한 줄씩 읽기 (ifstream, get)
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream read;
    read.open("093.txt", ifstream::in);

    char line = read.get();

    while (read.eof() == false) {
        cout << line;
        line = read.get();
    }
    cout << endl;

    read.close();
    return 0;
}
