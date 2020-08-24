// Null Aware Operator
// (?.), (??), (??=)

class Num {
  int num = 10;
}

void main() {
  var n = Num();
  int number;

  /*
  if (n != null) {
    number = n.num;
  } else {
    number = 0;
  }
  */
  number = n?.num ?? 0;

  print(number);
}
