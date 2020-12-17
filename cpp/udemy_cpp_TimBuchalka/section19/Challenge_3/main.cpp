// Section 19 Challange 3
// Word finder

#include <iostream>
#include <fstream>

using namespace std;

bool find_substring(const std::string& word_to_find, const std::string& target) {
    std::size_t found = target.find(word_to_find);
    if (found == std::string::npos) {
        return false;
    } else
        return true;
}

int main() {

    ifstream in_file {"./Challenge_3/romeoandjuliet.txt"};

    if (!in_file) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string word_read;
    string word_to_find;
    int word_count = 0;
    int match_count = 0;

    cout << "Enter the substring to search for: ";
    cin >> word_to_find;

    while (in_file >> word_read) {
        ++word_count;
        if (find_substring(word_to_find, word_read)) {
            ++match_count;
        //  cout << word_read << endl;
        }
    }
    cout << endl;

    cout << word_count << " words were searched..." << endl;
    cout << "The substring " << word_to_find << " was found " << match_count << " times" << endl;

    in_file.close();

    cout << endl;
    return 0;
}
