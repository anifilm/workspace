/**
 * @param {object} person
 */
const getFullName = person => {
//  return person.first_name + ' ' + person.parents.father.last_name;
    return `${person.first_name} ${person.parents.father.last_name}`;
}

//sample usage
const person = {
    first_name: "Jennifer",
    grades: [10, 6, 14, 3, 18],
    age: 17,
    parents: {
        father: {
            last_name: "Doe"
        },
        mother: {
            last_name: "Doe"
        }
    }
};
console.log(getFullName(person));
