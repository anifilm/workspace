class User{
    /**
     * @param {string} first_name
     * @param {string} last_name
     * @param {number} age
     */
    constructor(first_name, last_name, age){
        this.first_name = first_name;
        this.last_name = last_name;
        this.age = age;
    }
    static getVotingAge(){
        return 18;
    }
    canVote(){
        return this.age >= User.getVotingAge();
    }
}

//sample usage
const jennifer = new User("Jennifer", "Doe", 20);
console.log(User.getVotingAge());
console.log(jennifer.canVote());
