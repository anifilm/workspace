// api url
const url = 'https://jsonplaceholder.typicode.com/users/1';

// dom
const username = document.querySelector('#username');
const email = document.querySelector('#email');
const address = document.querySelector('#address');

// user data
//const user = {};

/**
 * @typedef {object} Address
 * @property {string} suite
 * @property {string} street
 * @property {string} city
 */

/**
 * @typedef {object} User
 * @property {string} name
 * @property {string} email
 * @property {Address} address
 */

/**
 * @returns {Promise<User>}
 */
const fetchUser = function () {
  return axios.get(url);
}

fetchUser.then(function (response) {
  response.address.cit
});

const startApp = function () {
  fetchUser()
    .then(function (response) {
      //console.log(response);
      const user = { ...response.data };
      // 이름, 이메일, 주소 표시하기
      console.log(user);
      username.innerText = user.name;
      email.innerText = user.email;
      address.innerText = `${user.address.suite}, ${user.address.street}, ${user.address.city}`;
    })
    .catch(function (error) {
      console.log(error);
    });
}

startApp();
