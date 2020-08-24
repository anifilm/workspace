// Class

class X {
  String name;

  X(this.name);

  void showOutput() {
    print('-> used default showOutput');
    print(this.name);
  }

  dynamic square(dynamic val) {
    print('-> used default square');
    return val * val;
  }
}

class Y extends X {
  Y(String name) : super(name);

  @override // override 사용법에 대하여 한번더 공부할것!
  void showOutput() {
    print('-> used extends showOutput');
    print(this.name);
  }

  // not using @override at this time
  dynamic square(dynamic val) {
    print('-> used extends square');
    return val * val;
  }
}

void main() {
  var x = X('Jack');
  x.showOutput();
  print(x.square(2));

  var y = Y('Jill');
  y.showOutput();
  print(y.square(2));
}
