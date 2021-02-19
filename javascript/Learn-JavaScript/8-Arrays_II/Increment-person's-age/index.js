/**
 * @param {object} person
 */
function incrementAge(person){
    person.age += 1;
    return person;
}

//sample usage
const person = {
    age: 18,
    first_name: "Jennifer",
    last_name: "Doe"
}
console.log(incrementAge(person));
