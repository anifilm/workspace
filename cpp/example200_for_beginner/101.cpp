// 파일 복사, 삭제하기 (copy, remove)
#include <iostream>
#include <experimental/filesystem>      // C++17 이상

using namespace std;
namespace fs = experimental::filesystem;

int main() {

    fs::copy("legend of yeongae.txt", "legend of yeongae (copy).txt");
    fs::remove("legend of yeongae.txt");

    return 0;
}
