// Section 8
// Convert USD to KRW

#include <iostream>

using namespace std;

int main() {

    const double usd_per_krw = 1134.72;

    double dollars;
    double won;

    cout << "Welcome to the USD to KRW converter" << endl;
    cout << "Enter the value in USD: ";
    cin >> dollars;

    won = dollars * usd_per_krw;

    cout << static_cast<int>(won) << " won is equivalent to " << dollars << " dollars." << endl;

    cout << endl;
    return 0;
}
