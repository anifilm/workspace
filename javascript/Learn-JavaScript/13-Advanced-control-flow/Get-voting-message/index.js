/**
 * @param {object} person
 */
const getVotingMessage = person => {
    if (person.age < 18){
        return "You can't vote yet";
    }else if (person.age === 18){
        return "Your first vote";
    }else{
        return "You have already voted";
    }
}

//sample usage
const person = {
    name: "John",
    age: 14
}
console.log(getVotingMessage(person));
