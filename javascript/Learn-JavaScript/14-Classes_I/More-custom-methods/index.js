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
    getFullName(){
        return `${this.first_name} ${this.last_name}`;
    }
    canVote(){
        return this.age > 18;
    }
    //getVotingMessage should return either: "You can vote" or "You can't vote".
    getVotingMessage() {
        if (this.canVote()){
            return "You can vote";
        }else{
            return "You can't vote";
        }
    }
}

//sample usage
const jennifer = new User("Jennifer", "Doe", 20);
console.log(jennifer.canVote());
console.log(jennifer.getVotingMessage());
