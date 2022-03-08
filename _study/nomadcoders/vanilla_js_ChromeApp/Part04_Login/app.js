const loginForm = document.querySelector('#login-form');
const loginInput = document.querySelector('#login-form input');
const greeting = document.querySelector('#greeting');

const link = document.querySelector('a');

const HIDDEN_CLASSNAME = 'hidden';

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
  greeting.innerText = `Hello ${username}`;
  greeting.classList.remove(HIDDEN_CLASSNAME);
}

function handleLinkClick() {
  alert('click');
}

loginForm.addEventListener('submit', onLoginSubmit);
link.addEventListener('click', handleLinkClick);
