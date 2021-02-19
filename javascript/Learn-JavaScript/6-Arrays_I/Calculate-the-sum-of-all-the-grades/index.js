/**
 * @param {array} grades
 */
function sumGrades(grades){
    let sum = 0;
    grades.forEach(function(grades) {
        sum += grades;
    });
    return sum;
}

//sample usage
console.log(sumGrades([15, 5, 10]));
