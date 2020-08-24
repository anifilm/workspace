// Class

class X {
  final name; // type will be defined by inferred value
  static const int age = 10;

  X(this.name);
}

void main() {
  var x = X('Jack');
  print(x.name);
  // print(x.age); // not access static member
  print(X.age);

  var y = X('Jill');
  print(y.name);
}
