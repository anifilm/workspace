// Section 20 Challenge 4
// Identifying palindrome strings using a stack and queue

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <stack>
#include <queue>

using namespace std;

bool is_palindrome(const string& s) {
    // You must implement this function
    // Since we are learning the STL - use a deque to solve the problem
    std::stack<char> stk;
    std::queue<char> q;

    for (char c : s)
        if (std::isalpha(c)) {
            c = std::toupper(c);
            q.push(c);
            stk.push(c);
        }

    char c1 {};
    char c2 {};

    while (!q.empty()) {
        c1 = q.front();
        q.pop();
        c2 = stk.top();
        stk.pop();

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
    for (const auto &s : test_strings) {
        cout << setw(8) << left << is_palindrome(s) << s << endl;
    }

    cout << endl;
    return 0;
}
