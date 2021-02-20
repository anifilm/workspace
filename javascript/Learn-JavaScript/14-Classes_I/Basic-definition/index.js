// class definition
class User {
    constructor(first_name, last_name, age){
        this.first_name = first_name;
        this.last_name = last_name;
        this.age = age;
    }
}

const getUser = () => {
    return new User("Jennifer", "Doe", 18);
};

//sample usage
console.log(getUser());
