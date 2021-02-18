/**
 * @param {array} elements
 */
function loopThroughElements(elements){
  //don't "return"
  elements.forEach(function(element) {
    console.log(element)
  })
}

//sample usage
loopThroughElements(["John", "Jennifer", "Madison"]);
