// api url
const url = 'https://jsonplaceholder.typicode.com/users';

// dom
const username = document.querySelector('#username');
const email = document.querySelector('#email');
const address = document.querySelector('#address');

// user data
//const user = [];

const startApp = function () {
  axios.get(url)
    .then(function (response) {
      //console.log(response);
      const user = [...response.data];
      // 이름, 이메일, 주소 표시하기
      console.log(user);
      username.innerText = user[0].name;
      email.innerText = user[0].email;
      address.innerText = `${user[0].address.suite}, ${user[0].address.street}, ${user[0].address.city}`;
    })
    .catch(function (error) {
      console.log(error);
    });
}

startApp();
