// 돌아온 마이펫
#include <iostream>

int main() {

    int arr_size;

    std::cout << "array size: ";
    std::cin >> arr_size;

    int *list = new int[arr_size];

    for (int i {0}; i < arr_size; i++) {
        std::cout << "list[" << i << "] = ";
        std::cin >> list[i];
    }
    std::cout << std::endl;

    std::cout << "Elements of list" << std::endl;
    for (int i {0}; i < arr_size; i++)
        std::cout << "list[" << i << "]: " << list[i] << std::endl;

    delete[] list;
    return 0;
}
