// Section 20
// List

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>		// for std::advance

using namespace std;

class Person {
    friend std::ostream& operator<<(std::ostream& os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name {"Unknown"}, age {0} {}
    Person(std::string name, int age) : name {name}, age {age} {}
    bool operator<(const Person& rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person& rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream& operator<<(std::ostream& os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

template <typename T>
void display(const std::list<T>& l) {
    cout << "[ ";
    for (const auto& elem : l) {
        cout << elem << " ";
    }
    cout << "]" << endl;
}

void test1() {
    cout << "\n== Test1 ==============================" << endl;
    std::list<int> l1 {1, 2, 3, 4, 5};
    display(l1);

    std::list<string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);

    std::list<int> l3;
    l3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l3);

    std::list<int> l4 (10, 100);
    display(l4);
}

void test2() {
    cout << "\n== Test2 ==============================" << endl;
    std::list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);

    cout << "Size: " << l.size() << endl;
    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;

    l.clear();
    display(l);

    cout << "Size: " << l.size() << endl;
}

void test3() {
    cout << "\n== Test3 ==============================" << endl;
    std::list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);

    l.resize(5);
    display(l);

    l.resize(10);
    display(l);

    std::list<Person> persons;
    persons.resize(5);				// uses the Person default constructor
    display(persons);
}

void test4() {
    cout << "\n== Test4 ==============================" << endl;
    std::list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);

    auto it = std::find(l.begin(), l.end(), 5);
    if (it != l.end()) {
        l.insert(it, 100);
    }
    display(l);

    std::list<int> l2 {1000, 2000, 3000};
    l.insert(it, l2.begin(), l2.end());
    display(l);

    std::advance(it, -4);			// point to the 100
    cout << *it << endl;

    l.erase(it);					// remove the 100 - iterator becomes invalid
    display(l);
}

void test5() {
    cout << "\n== Test5 ==============================" << endl;
    std::list<Person> stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    display(stooges);

    std::string name;
    int age {};

    cout << "\nEnter the name of the next stooge: ";
    getline(cin, name);

    cout << "Enter their age: ";
    cin >> age;

    stooges.emplace_back(name, age);
    display(stooges);

    // Insert Frank before Moe
    auto it = std::find(stooges.begin(), stooges.end(), Person {"Moe", 25});
    if (it != stooges.end())
        stooges.emplace(it, "Frank", 18);
    display(stooges);
}

void test6() {
    cout << "\n== Test6 ==============================" << endl;
    std::list<Person> stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    display(stooges);

    stooges.sort();
    display(stooges);
}

int main() {

    test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();

    cout << endl;
    return 0;
}
