/**
 * @param {object} person
 */
function getObjectValues(person){
    return Object.values(person);
}

//sample usage
const person = {
    age: 18,
    first_name: "Jennifer",
    last_name: "Doe"
}
console.log(getObjectValues(person));
