// const static 멤버
#include <iostream>

using namespace std;

class CountryArea {
public:
    const static int RUSSIA = 1707540;
    const static int CANADA = 998467;
    const static int CHINA  = 957290;
    const static int SOUTH_KOREA = 9922;
};

int main() {

    cout << "러시아 면적: " << CountryArea::RUSSIA << " km²" << endl;
    cout << "캐나다 면적: " << CountryArea::CANADA << " km²" << endl;
    cout << "중국 면적: " << CountryArea::CHINA << " km²" << endl;
    cout << "한국 면적: " << CountryArea::SOUTH_KOREA << " km²" << endl;

    return 0;
}
