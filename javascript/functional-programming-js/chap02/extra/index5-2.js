function add(a) {
  return function (b) {
    return a + b;
  }
}

add(3)(3); //-> 6
