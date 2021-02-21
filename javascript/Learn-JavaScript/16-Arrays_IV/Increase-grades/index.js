/**
 * @param {number[]} grades
 */
const shouldAdjustGrades = grades => {
    return grades.some(grade => grade < 10);
}

//sample usage
shouldAdjustGrades([10, 12, 10, 14]);
