/**
 * @param {object[]} grades
 */
const getNumberOfTestsTaken = grades => {
    return grades.length;
};

//sample usage
const grades = [{
    date: "2018-12-13",
    grade: 14
}, {
    date: "2018-12-15",
    grade: 18
}]
console.log(getNumberOfTestsTaken(grades));
