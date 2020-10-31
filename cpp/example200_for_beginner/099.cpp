// 하위 폴더 목록 확인하기 (directory_iterator)
#include <iostream>
#include <experimental/filesystem>      // C++17 이상

using namespace std;
namespace fs = experimental::filesystem;

int main() {

    string directory = "C:\\Program Files";

    for (auto &name : fs::directory_iterator(directory))
        cout << name << endl;

    return 0;
}
