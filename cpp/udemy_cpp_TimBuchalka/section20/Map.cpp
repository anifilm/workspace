// Section 20
// Map

#include <iostream>
#include <set>
#include <map>

using namespace std;

void display(const std::map<string, std::set<int>>& m) {
    cout << "[ ";
    for (const auto& elem : m) {
        cout << elem.first << ": [ ";
            for (const auto& set_elem : elem.second)
                cout << set_elem << " ";
            cout << "] ";
    }
    cout << "]" << endl;
}

template <typename T1, typename T2>
void display(const std::map<T1, T2>& m) {
    cout << "[ ";
    for (const auto& elem : m) {
        cout << elem.first << ":" << elem.second << " ";
    }
    cout << "]" << endl;
}

void test1() {
    cout << "\n== Test1 ==============================" << endl;
    std::map<string, int> m {
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };
    display(m);

    m.insert(std::pair<string, int>("Anna", 10));
    display(m);

    m.insert(std::make_pair("Joe", 5));
    display(m);

    m["Frank"] = 18;
    display(m);

    m["Frank"] += 10;
    display(m);

    m.erase("Frank");
    display(m);

    cout << "Count for Joe: " << m.count("Joe") << endl;
    cout << "Count for Frank: " << m.count("Frank") << endl;

    auto it = m.find("Larry");
    if (it != m.end())
        cout << "Found: " << it->first << " : " << it->second << endl;

    m.clear();

    display(m);
}

void test2() {
    cout << "\n== Test2 ==============================" << endl;
    std::map<string, set<int>> grades {
        {"Larry", {100, 90}},
        {"Moe", {94}},
        {"Curly", {80, 90, 100}}
    };
    display(grades);

    grades["Larry"].insert(95);				// insert 95 into the set of grades for "Larry"
    display(grades);

    auto it = grades.find("Moe");
    if (it != grades.end()) {				// found "Moe"
        it->second.insert(1000);			// insert 1000 into Moe's set of grades
    }										// it->first is the key, it->second is the value (set)
    display(grades);
}

int main() {

    test1();
    // test2();

    cout << endl;
    return 0;
}
