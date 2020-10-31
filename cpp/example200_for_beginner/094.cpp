// 파일을 한 줄씩 읽기 (ifstream, getline)
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream file;
    file.open("093.txt", ifstream::in);

    string line;

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
