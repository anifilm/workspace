const title = document.querySelector("#title");

function handleResize(event) {
  console.log(event);
}
window.addEventListener("resize", handleResize);

function handleClick() {
  title.style.color = "red";
  console.log("Click title!")
}
title.addEventListener("click", handleClick);
