// 객체의 생성에서는 반드시 new & delete
#include <iostream>
#include <cstring>

using namespace std;

char* MakeStrAdr(int len) {
//  char* str = (char*)malloc(sizeof(char) * len);
    char* str = new char[len];
    return str;
}

int main() {

    char* str = MakeStrAdr(20);

    strcpy(str, "I am so happy~");
    cout << str << endl;

//  free(str);
    delete[] str;
    return 0;
}
