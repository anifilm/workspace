const loginForm = document.querySelector('#login-form');
const loginInput = document.querySelector('#login-form input');
const greeting = document.querySelector('#greeting');

//const link = document.querySelector('a');

const HIDDEN_CLASSNAME = 'hidden';
const USERNAME_KEY = 'username';

function onLoginSubmit(e) {
  e.preventDefault();
  const username = loginInput.value;
  if (username === '') {
    alert('Please write your name.');
    return;
  } else if (username.length > 15) {
    alert('Your name is too long.');
    return;
  } else {
    console.log(`Hello ${username}`);
  }
  loginForm.classList.add(HIDDEN_CLASSNAME);
  paintGreetings(username);
  localStorage.setItem(USERNAME_KEY, username);
}

/*function handleLinkClick() {
  alert('click');
}*/

function paintGreetings(username) {
  greeting.classList.remove(HIDDEN_CLASSNAME);
  greeting.innerText = `Hello ${username}`;
}

//loginForm.addEventListener('submit', onLoginSubmit);
//link.addEventListener('click', handleLinkClick);

const saveUsername = localStorage.getItem(USERNAME_KEY);

if (saveUsername === null) {
  loginForm.classList.remove(HIDDEN_CLASSNAME);
  loginForm.addEventListener('submit', onLoginSubmit);
} else {
  paintGreetings(saveUsername);
}
