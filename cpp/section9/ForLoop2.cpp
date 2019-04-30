// Section 9
// Range-based For Loop

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

    // int scores[] = {10, 20, 30};

    // for (auto score: scores)
    //     cout << score << endl;

    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};

    double average_temp {};
    double total {};

    for (auto temp: temperatures)
        total += temp;

    if (temperatures.size() != 0)
        average_temp = total / temperatures.size();

    cout << fixed << setprecision(1);
    cout << "Average temperature is " << average_temp << endl;


	cout << endl;	
	return 0;
}