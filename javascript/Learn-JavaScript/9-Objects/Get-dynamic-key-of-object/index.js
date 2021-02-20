/**
 * @param {object} person
 * @param {string} key
 */
function getDynamicKey(person, key){
    return person[key];
}

//sample usage
const person = {
    age: 18,
    first_name: "Jennifer",
    last_name: "Doe"
}
console.log(getDynamicKey(person, "age"));
console.log(getDynamicKey(person, "first_name"));
