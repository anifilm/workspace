// malloc & free를 대신하는 new & delete
#include <iostream>
#include <cstring>

using namespace std;

char* MakeStrAdr(int len) {
    char* str = (char*)malloc(sizeof(char) * len);
    return str;
}

int main() {

    char* str = MakeStrAdr(20);

    strcpy(str, "I am so happy~");
    cout << str << endl;

    free(str);
    return 0;
}
