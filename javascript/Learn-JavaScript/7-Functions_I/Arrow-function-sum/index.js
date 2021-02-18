/**
 * @param {array} grades
 */
function sumGrades(grades){
  let sum = 0;
  grades.forEach(grade => {
    sum += grade;
  })
  return sum;
}

//sample usage
console.log(sumGrades([15, 5, 10]));
