// Header
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>

class Student {
private:
    // Member Variables
    std::string newName;
    char newGrade;

public:
    // Default Constructor
    Student();
    // Overload Constructor
    Student(std::string, char);
    // Destructor
    ~Student();

    // Accessor Functions
    std::string getName() const;
    char getGrade() const;

    // Mutator Functions
    void setName(std::string);
    void setGrade(char);
};

#endif // _STUDENT_H_