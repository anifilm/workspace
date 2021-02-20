/**
 * @param {object} person
 */
function getPersonFullName(person){
    return `${person.name.first} ${person.name.last}`;
}

//sample usage
const person = {
    age: 18,
    name: {
        first: "Jennifer",
        last: "Doe"
    }
}
console.log(getPersonFullName(person));
