// 프로그램 실행 폴더 알아내기 (current_path)
#include <iostream>
#include <experimental/filesystem>      // C++17 이상, (빌드시 $ g++ -std=c++17 097.cpp -lstdc++fs)

using namespace std;
namespace fs = experimental::filesystem;

int main() {

    cout << "프로젝트 폴더: " << fs::current_path() << endl;

    return 0;
}
