// 돌아온 마이펫
#include <iostream>

using namespace std;

int main() {

    int arr_size;

    cout << "array size: ";
    cin >> arr_size;

    int* list = new int[arr_size];

    for (int i {0}; i < arr_size; i++) {
        cout << "list[" << i << "] = ";
        cin >> list[i];
    }
    cout << endl;

    cout << "Elements of list" << endl;
    for (int i {0}; i < arr_size; i++)
        cout << "list[" << i << "]: " << list[i] << endl;

    delete[] list;
    return 0;
}
