// Section 6
// Declaring and initializing variables

#include <iostream>

using namespace std;

// This progeram will clculate the area of a room in square feet

int main() {

    int room_width;
    int room_length;

    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the length of thw room: ";
    cin >> room_length;

    cout << "The area of the room is " << room_width * room_length << " square feet" << endl;

    return 0;
}