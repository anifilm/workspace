// Section 9
// Shipping

/*
    Shipping cost calculator

    Ask the user for package dimension in inches
    length, width, height - these should be integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double base_cost {2.50};

    const int tier1_threshold {100};
    const int tier2_threshold {500};

    int max_dimension_lenth {10};

    const double tier1_surcharge {0.1};
    const double tier2_surcharge {0.25};

    int p_length {}, p_width {}, p_height {};

    cout << "\nWelcome to the package cost calculator" << endl;
    cout << "\nEnter length, width and height of the package separated by spaces: ";
    cin >> p_length >> p_width >> p_height;

    int package_volume {p_length * p_width * p_height};
    //double package_cost {};

    if (p_length < max_dimension_lenth && p_width < max_dimension_lenth && p_height < max_dimension_lenth) {

        double package_cost {};
        package_cost = base_cost;

        if (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "adding tier 2 surcharge" << endl;

        } else if (package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
            cout << "adding tier 1 surcharge" << endl;
        }
        cout << fixed << setprecision(2);   // print dollars nicely
        cout << "The volume of your package is " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;

    } else {
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    }

	cout << endl;	
	return 0;
}
