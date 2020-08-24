void main() {
  // String -> int
  var one = int.parse('1');
  assert(one == 1);
  print(one);

  // String -> double
  var onePointOne = double.parse('1.1');
  assert(onePointOne == 1.1);
  print(onePointOne);

  // int -> String
  String oneAsString = 1.toString();
  assert(oneAsString == '1');
  print(oneAsString);

  // double -> String
  String piAsString = 3.14159.toStringAsFixed(2);
  assert(piAsString == '3.14');
  print(piAsString);
}
