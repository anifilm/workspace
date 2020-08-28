// for-in loop

void main() {
  var numbers = [1, 2, 3];

  /*
  for (var i = 0; i < numbers.length; i++) {
    print(numbers[i]);
  }
  */
  for (var n in numbers) {
    print(n);
  }
}
