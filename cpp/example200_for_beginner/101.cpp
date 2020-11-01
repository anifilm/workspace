// 파일 복사, 삭제하기 (copy, remove)
#include <iostream>
#include <experimental/filesystem>      // C++17 이상, (빌드시 $ g++ -std=c++17 101.cpp -lstdc++fs)

using namespace std;
namespace fs = experimental::filesystem;

int main() {

    fs::copy("legend of yeongae.txt", "legend of yeongae (copy).txt");
    fs::remove("legend of yeongae.txt");

    return 0;
}
