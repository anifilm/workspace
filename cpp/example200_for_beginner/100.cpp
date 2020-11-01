// 폴더 생성, 복사, 삭제하기 (filesystem)
#include <iostream>
#include <experimental/filesystem>      // C++17 이상, (빌드시 $ g++ -std=c++17 100.cpp -lstdc++fs)

using namespace std;
namespace fs = experimental::filesystem;

int main() {

    fs::create_directory("temp");
    fs::copy("temp", "temp_copy");
    fs::remove("temp");
    fs::remove("temp_copy");

    return 0;
}
