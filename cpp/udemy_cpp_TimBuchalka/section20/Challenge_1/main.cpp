// Section 20 Challenge 1
// Identifying palindrome string using a deque

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <vector>
#include <deque>

using namespace std;

bool is_palindrome(const std::string& s) {
    // You must implement this function
    // Since we are learning the STL - use a deque to solve the problem
    std::deque<char> d;

    for (char c : s)
        if (std::isalpha(c))
            d.push_back(std::toupper(c));

    char c1;
    char c2;

    while (d.size() > 1) {
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();

        if (c1 != c2)
            return false;
    }
    return true;
}

int main() {

    std::vector<string> test_strings {
        "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana", "avid diva",
        "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++", "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!",
        "This id a palindrome", "palindrome"
    };

    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;
    for (const auto& s : test_strings) {
        cout << setw(8) << left << is_palindrome(s) << s << endl;
    }

    cout << endl;
    return 0;
}
