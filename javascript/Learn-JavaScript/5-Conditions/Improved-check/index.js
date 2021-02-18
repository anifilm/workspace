/**
 * @param {number} age
 */
function canVote(age){
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}

//sample usage
console.log(canVote(25)) ;
