/**
 * @param {object} person
 */
function getPersonFirstName(person){
    return person.name.first;
}

//sample usage
const person = {
    age: 18,
    name: {
        first: "Jennifer",
        last: "Doe"
    }
}
console.log(getPersonFirstName(person));
