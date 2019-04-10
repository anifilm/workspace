#include <iostream>

using namespace std;

int main() {

    cout << "Hello, welcome to anifilm's Carpet Ceaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";

    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "\nHow many large rooms would you like cleaned? ";

    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    const double price_per_small_room {20};
    const double price_per_large_room {30};
    const double sales_tax {0.06};
    const int estimate_expiry {30};     // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $"
         << (price_per_small_room * number_of_small_rooms) +
            (price_per_large_room * number_of_large_rooms)
         << endl;
    cout << "Tax: $"
         << ((price_per_small_room * number_of_small_rooms) +
            (price_per_large_room * number_of_large_rooms)) * sales_tax
         << endl;
    cout << "========================================" << endl;
    cout << "Total estimate: $"
         << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) +
            (((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax)
         << endl;
    cout << "\nThis estimate is valid for " << estimate_expiry << " days" << endl;

    cout << endl;
    return 0;
}