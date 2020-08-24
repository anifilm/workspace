// forEach loop

void main() {
  var numbers = [1, 2, 3];

  numbers.forEach((n) => print(n));

  numbers.forEach(printNum);
}

void printNum(num) {
  print(num);
}
