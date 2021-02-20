/**
 * @param {object[]} users
 */
const getAverageAge = users => {
    let total = 0;
    users.forEach(user => total += user.age);
    return total / users.length;
};

//sample usage
const users = [{
    joined_on: "2018-12-13",
    age: 14
}, {
    joined_on: "2018-12-15",
    age: 18
}]
console.log(getAverageAge(users));
