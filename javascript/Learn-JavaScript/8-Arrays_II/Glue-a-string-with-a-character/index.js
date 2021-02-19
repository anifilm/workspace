/**
 * @param {array} people
 */
const getNamesString = people => {
    return people.join(", ");
}

//sample usage
console.log(getNamesString(["John", "Jennifer", "Liham"]));
