// 파일 크기 확인하기 (file_size)
#include <iostream>
#include <experimental/filesystem>      // C++17 이상, (빌드시 $ g++ -std=c++17 103.cpp -lstdc++fs)

using namespace std;
namespace fs = experimental::filesystem;

int main() {

    int size = fs::file_size("legend of yeongae.txt");

    cout << "파일 크기: " << size << "바이트" << endl;

    return 0;
}
