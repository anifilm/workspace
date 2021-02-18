/**
 * @param {array} elements
 */
function loopAndGetValue(elements){
  const value = 42;
  elements.forEach(function(element){
    console.log(element);
  });
  return value;
}

//sample usage
console.log(loopAndGetValue(["John", "Jennifer", "Madison"]));
