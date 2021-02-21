/**
 * @param {Object[]} users
 * @param {string} users[].first_name
 * @param {string} users[].last_name
 * @param {boolean} users[].is_verified
 */
const getUsersFullNames = users => {
    return users.map(user => `${user.first_name} ${user.last_name}`).join(", ");
}

//sample usage
const users = [{
    id: 1,
    first_name: "John",
    last_name: "Doe",
    is_verified: false
}, {
    id: 2,
    first_name: "Jennifer",
    last_name: "Doe",
    is_verified: true
}];
console.log(getUsersFullNames(users));
