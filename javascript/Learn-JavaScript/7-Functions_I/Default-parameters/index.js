/**
 * @param {string} name
 */
function sayHello(name = "user"){
  return `Hello ${name}`;
}

//sample usage
console.log(sayHello("John"));
console.log(sayHello());
