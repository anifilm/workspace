/** @param {number[]} grades */
export function getNumberOfGrades(grades) {
    // return the number of grades
    return grades.length;
}

/** @param {number[]} grades */
export function getAverageValue(grades) {
    // return the average value of all grades (sum of all grades / total number of grades)
    let sum = 0;
    grades.forEach(grade => sum += grade);
    return Math.round(sum / grades.length);
}

/** @param {number[]} grades */
export function getLowestValue(grades) {
    // return the lowest grade from the array
//  let min = grades[0];
//  grades.forEach(grade => {
//      if (grade < min) min = grade;
//  });
//  return min;
    return Math.min(...grades);
}

/** @param {number[]} grades */
export function getHighestValue(grades) {
    // return the highest grade from the array
//  let max = grades[0];
//  grades.forEach(grade => {
//      if (grade > max) max = grade;
//  });
//  return max;
    return Math.max(...grades);
}

/** @param {number[]} grades */
export function getPassingGrades(grades) {
    // return a CSV of all passing grades (10 and above)
//  return grades.filter(grade => grade >= 10);
    return grades.filter(grade => grade >= 10).join(", ");
}

/** @param {number[]} grades */
export function getFailingGrades(grades) {
    // return a CSV of all failing grades (9 and below)
//  return grades.filter(grade => grade < 10);
    return grades.filter(grade => grade < 10).join(", ");
}

/** @param {number[]} grades */
export function getRaisedGrades(grades) {
    // return a CSV of all the grades raised by 2 (grades should not exceed 20)
//  return grades.map(grade => grade + 2);
    return grades.map(grade => {
        const newValue = grade + 2;
        if (newValue >= 20){
            return 20;
        }
        return newValue;
    }).join(", ");
}
