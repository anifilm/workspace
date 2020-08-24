// Null Aware Operator
// (?.), (??), (??=)

void main() {
  int number;

  /*
  if (number == null) {
    number = 100;
  }
  */
  number ??= 100;

  print(number);
}
