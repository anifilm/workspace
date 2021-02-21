/**
 * @param {number[]} grades
 */
const shouldCancelExam = grades => {
    return grades.every(grade => grade >= 18);
}

//sample usage
shouldCancelExam([10, 12, 10, 14]);
