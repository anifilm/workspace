/**
 * @param {array} users
 * @param {number} id
 */
const verifyUser = (users, id) => {
//  users.find(user => user.id === id).is_verified = true;
    const user = users.find(user => user.id === id);
    user.is_verified = true;
    return users;
}

//sample usage
const users = [{
    id: 1,
    name: "John",
    is_verified: false
}, {
    id: 2,
    name: "Jennifer",
    is_verified: false
}, {
    id: 3,
    name: "Bob",
    is_verified: false
}];
console.log(verifyUser(users, 2));
