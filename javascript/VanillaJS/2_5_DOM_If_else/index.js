// const age = prompt("How old are you?");

// if (age >= 18 && age <= 21) {
//   console.log("You can drink but you should not.")
// } else if (age > 21) {
//   console.log("Go ahead!")
// } else {
//   console.log("Too young!")
// }

const title = document.querySelector("#title");

const BASE_COLOR = "rgb(52, 73, 94)";
const OTHER_COLOR = "#7f8c8d";

function handleClick() {
  const currentColor = title.style.color;
  if (currentColor === BASE_COLOR) {
    title.style.color = OTHER_COLOR;
  } else {
    title.style.color = BASE_COLOR;
  }
}

function init() {
  title.style.color = BASE_COLOR;
  title.addEventListener("click", handleClick);
}

init();
