/**
 * @param {object} person
 */
function getObjectKeys(person){
    return Object.keys(person);
}

//sample usage
const person = {
    age: 18,
    first_name: "Jennifer",
    last_name: "Doe"
}
console.log(getObjectKeys(person));
