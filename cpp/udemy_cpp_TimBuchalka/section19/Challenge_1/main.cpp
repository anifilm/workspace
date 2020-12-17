// Section 19 Challenge 1
// Formatting output

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

void ruler() {
    cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890" << endl;
}

int main() {

    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", {
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 }
                    },
                },
                {
                    "Brazil", {
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", {
                        { "Valdivia", 260000, 569.12 },
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", {
                    { "Buenos Aires", 3010000, 723.77 }
                }
            },
        }
    };

    const int total_width = 70;
    const int field1_width = 20;    // Country name
    const int field2_width = 20;    // City name
    const int field3_width = 15;    // Population
    const int field4_width = 15;    // Cost
    int title_length = tours.title.length();

    // Show ruler
    ruler();
    cout << endl;

    // Unformatted display so you can see how to access the vector elements
    cout << setw((total_width - title_length) / 2) << "" << tours.title << endl;
    cout << endl;

    cout << setw(field1_width) << left << "Country"
         << setw(field2_width) << left << "City"
         << setw(field3_width) << right << "Population"
         << setw(field4_width) << right << "Price"
         << endl;

    cout << setfill('-');
    cout << setw(total_width) << "" << endl;

    cout << setfill(' ');
    cout << setprecision(2) << fixed;

    for(auto country : tours.countries) {            // loop through the countries
        // for(auto city : country.cities) {         // loop through the cities for each country
        for (size_t i = 0; i < country.cities.size(); i++) {
            cout << setw(field1_width) << left << ((i == 0) ? country.name : "");
            cout << setw(field2_width) << left << country.cities.at(i).name
                 << setw(field3_width) << right << country.cities.at(i).population
                 << setw(field4_width) << right << country.cities.at(i).cost
                 << endl;
        }
    }

    cout << endl;
    return 0;
}
