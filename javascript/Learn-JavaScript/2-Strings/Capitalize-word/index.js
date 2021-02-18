/**
 * @param {string} word
 */
function capitalize(word){
  return word[0].toUpperCase() + word.substring(1).toLowerCase();
}

//sample usage
console.log(capitalize("john"));  //John
console.log(capitalize("BRAVO")); //Bravo
console.log(capitalize("BLAne")); //Blane
