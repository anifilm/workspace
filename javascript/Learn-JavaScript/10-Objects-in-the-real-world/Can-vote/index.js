/**
 * @param {object} person
 */
const canVote = person => {
    return person.age >= 18;
}

//sample usage
const person = {
    name: "Jad",
    age: 26
};
console.log(canVote(person));
