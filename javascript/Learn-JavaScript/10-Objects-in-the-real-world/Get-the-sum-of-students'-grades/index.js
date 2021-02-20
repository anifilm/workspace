/**
 * @param {object} person
 */
const getTotalOfGrades = student => {
    let sum = 0;
    student.grades.forEach(grade => sum += grade);
    return sum;
}

//sample usage
const student = {
    name: "Jennifer",
    grades: [10, 6, 14, 3, 18],
    age: 17
};
console.log(getTotalOfGrades(student));
