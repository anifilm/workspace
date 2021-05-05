function makeAddFunction(amount) {
  function add(number) {
    return number + amount;
  }
  return add;
}

function makeExponentialFunction(base) {
  function raise(exponent) {
    return Math.pow(base, exponent);
  }
  return raise;
}

var addTenTo = makeAddFunction(10);
addTenTo(10); //-> 20

var raiseThreeTo = makeExponentialFunction(3);
raiseThreeTo(2); //-> 9
