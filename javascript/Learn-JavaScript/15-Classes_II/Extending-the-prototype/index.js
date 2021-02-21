/**
 * Constructor function
 * @param {string} first_name
 * @param {string} last_name
 * @param {number} age
 */
function User(first_name, last_name, age){
    this.first_name = first_name;
    this.last_name = last_name;
    this.age = age;
}

User.prototype.getFullName = function() {
    return `${this.first_name} ${this.last_name}`;
}

//sample usage
const jennifer = new User("Jennifer", "Doe", 43);
console.log(jennifer.getFullName());
