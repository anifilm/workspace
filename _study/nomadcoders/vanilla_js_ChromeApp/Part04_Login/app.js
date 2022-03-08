const loginForm = document.querySelector('#login-form');
const loginInput = document.querySelector('#login-form input');

const link = document.querySelector('a');

function onLoginSubmit(e) {
  e.preventDefault();
  const username = loginInput.value;
  if (username === '') {
    alert('Please write your name.');
  } else if (username.length > 15) {
    alert('Your name is too long.');
  } else {
    console.log(username);
  }
}

function handleLinkClick() {
  alert('click');
}

loginForm.addEventListener('submit', onLoginSubmit);
link.addEventListener('click', handleLinkClick);
