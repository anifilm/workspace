// Section 19 Challenge 2
// Automated Grader

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void print_header();
void print_footer(double average);
void print_student(const std::string& studnet, int score);
int process_response(const std::string& response, const std::string& answer_key);

void print_header() {
    cout << setw(20) << left << "Student"
         << setw(8) << right << "Score" << endl;

    cout << setw(28)
         << setfill('-')
         << "" << endl;
    cout << setfill(' ');
}

void print_footer(double average) {
    cout << setw(28)
         << setfill('-')
         << "" << endl;
    cout << setfill(' ');

    cout << setw(20) << left << "Average score"
         << setw(8) << right << average << endl;
}

void print_student(const std::string &student, int score) {
    cout << setw(20) << left << student
         << setw(8) << right << score << endl;
}

int process_response(const std::string& response, const std::string& answer_key) {
    int score = 0;
    for (size_t i = 0; i < answer_key.size(); i++) {
        if (response.at(i) == answer_key.at(i))
            score++;
    }
    return score;
}

int main() {

    ifstream in_file {"./Challenge_2/responses.txt"};

    if (!in_file) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string answer_key {};
    string name {};
    string response {};

    int running_sum = 0;
    int total_students = 0;
    double average_score = 0.0;

    in_file >> answer_key;

    print_header();

    while (in_file >> name >> response) {
        ++total_students;
        int score = process_response(response, answer_key);
        running_sum += score;
        print_student(name, score);
    }

    if (total_students != 0)
        average_score = static_cast<double>(running_sum) / total_students;

    print_footer(average_score);

    in_file.close();

    cout << endl;
    return 0;
}
