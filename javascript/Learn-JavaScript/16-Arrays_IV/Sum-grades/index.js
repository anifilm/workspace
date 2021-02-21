/**
 * @param {number[]} grades
 */
const sumGrades = grades => {
    return grades.reduce((total, current) => total + current, 0);
}

//sample usage
console.log(sumGrades([10, 12, 10, 14]));
