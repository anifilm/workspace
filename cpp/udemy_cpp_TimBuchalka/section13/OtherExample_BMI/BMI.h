// Header ==> Function Declarations
#ifndef _BMI_H_
#define _BMI_H_
#include <string>

class BMI {
private:
    // Member variables
    std::string newName;
    int newHeight;
    double newWeight;

public:
    // Default Constructor
    BMI();
    // Overload Constructor
    BMI(std::string, int, double);
    // Destructor
    ~BMI();

    // Accessor Functions
    std::string getName() const;
        // getName - returns name of patient
    int getHeight() const;
        // getHeight - return height of patient
    double getWeight() const;
        // getWeight - return weight of patient

    // Mutator Functions
    void setName(std::string);
        // setName - sets name of patient
        // @param string - name of patient
    void setHeight(int);
        // setHeight - sets height of patient
        // @param int - height of patient
    void setWeight(double);
        // setWeight - sets weight of patient
        // @param double - weight of patient

    double calculateBMI();
        // calculateBMI - calcukates BMI of patient
        // @return double - BMI of student
};

#endif // _BMI_H_
