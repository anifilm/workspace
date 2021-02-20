/**
 * @param {object[]} grades
 */
const getSumOfGrades = results => {
    let sum = 0;
    results.forEach(result => sum += result.grade);
    return sum;
};

//sample usage
const results = [{
    date: "2018-12-13",
    grade: 14
}, {
    date: "2018-12-15",
    grade: 18
}]
console.log(getSumOfGrades(results));
