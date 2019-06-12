// Section 20 Challenge 3
// Maps and Sets

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <map>

using namespace std;

// Used for Part1
// Display the word and count from the std::map<std::string, int>
void display_words(const map<string, int> &words) {
	cout << setw(12) << left << "\nWord"
		 << setw(8) << right << "Count" << endl;
	cout << "===================" << endl;
	for (auto pair: words)
		cout << setw(12) << left << pair.first
			 << setw(7) << right << pair.second << endl;
}

// Used for Part2
// Display the word and occurences from the std::map<std::string, std::set<int>>
void display_words(const map<string, set<int>> &words) {
	cout << setw(12) << left << "\nWord"
			<< setw(17) << right << "Occurrences" << endl;
	cout << "============================" << endl;
	for (auto pair: words) {
		cout << setw(12) << left << pair.first
						 << left << "[ ";
		for (auto i: pair.second)
			cout << i << " ";
		cout << "]" << endl;
	}
}

// This function removes perious, commas, semicolons and colon in
// a string and returns the clean version
string clean_string(const string &s) {
	string result;
	for (char c: s) {
		if (c == '.' || c == ',' || c == ';' || c == ':')
			continue;
		else
			result += c;
	}
	return result;
}

// Part1 precess the file and build a map of words and the
// number ot times they occur in the file
void part1() {
	map<string, int> words;
	string line;
	string word;
	ifstream in_file {"./Challenge_3/words.txt"};

	if (in_file) {
		while (getline(in_file, line)) {
			// cout << line;
			stringstream ss(line);
			while (ss >> word) {
				word = clean_string(word);
				words[word]++;
			}
		}
		in_file.close();
		display_words(words);

	} else {
		cerr << "Error opening input file" << endl;
	}
}

// Part2 process the file and builds a map of words
// and a set of numbers in which the word appears
void part2() {
	map<string, set<int>> words;
	string line;
	string word;
	ifstream in_file {"./Challenge_3/words.txt"};

	if (in_file) {
		int line_number {0};
		while (getline(in_file, line)) {
			line_number++;
			// cout << line;
			stringstream ss(line);
			while (ss >> word) {
				word = clean_string(word);
				words[word].insert(line_number);
			}
		}
		in_file.close();
		display_words(words);

	} else {
		cerr << "Error opening input file" << endl;
	}
}

int main() {

	part1();
	part2();

	cout << endl;	
	return 0;
}