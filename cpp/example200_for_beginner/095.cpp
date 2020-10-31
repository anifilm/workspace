// 파일 내용을 모두 읽기 (stringstream)
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main() {

    ifstream ifs("legend of mahan.txt");

    stringstream ss;

    ss << ifs.rdbuf();
    ifs.close();

    string read = "";

    cout << "==!ss.eof ==" << endl;
    while (!ss.eof()) {
        ss >> read;
        cout << read << " ";
    }
    cout << endl;

    cout << "\n== !ss.str() ==" << endl;
    read = ss.str();
    cout << read << endl;

    return 0;
}
