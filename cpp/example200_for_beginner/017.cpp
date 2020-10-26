// 문자열형 변수 이해하기 (string)
#include <iostream>
#include <string>

using namespace std;

int main() {

    string my_country {"korea"};
    string my_job {"developer"};

    cout << "Country: " << my_country << endl;
    cout << "Job: " << my_job << endl;

    string my_info = my_country + ", " + my_job;

    cout << "My Info: " << my_info << endl;

    return 0;
}

/*

C++표준 라이브러리
#include <string>

std::string

*/
