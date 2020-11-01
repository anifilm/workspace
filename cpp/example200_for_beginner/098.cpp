// 폴더 존재 유무 확인하기 (exists)
#include <iostream>
#include <experimental/filesystem>      // C++17 이상, (빌드시 $ g++ -std=c++17 098.cpp -lstdc++fs)

using namespace std;
namespace fs = experimental::filesystem;

int main() {

    if (fs::exists("c:\\Target") == true)
        cout << "폴더가 존재합니다." << endl;
    else
        cout << "폴더가 없습니다." << endl;

    return 0;
}
