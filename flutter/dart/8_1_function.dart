// Function

void main() {
  showOutput(square(2));
  showOutput(square(2.5));

  print(square.runtimeType);
  print(showOutput.runtimeType);
}

dynamic square(var num) {
  return num * num;
}

void showOutput(var msg) {
  print(msg);
}
