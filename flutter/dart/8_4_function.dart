// Function

void main() {
  print(sum(2, 2));

  print(sum2(2, 3));

  print(sum3(num2: 4, num1: 2));

  print(sum4(10, num2: 2));

  print(sum5(10));

  print(sum6(10));

  print(sum7(2, 2));
  print(sum7(2));
}

dynamic sum(var num1, var num2) => num1 + num2;

dynamic sum2(var num1, num2) => num1 + num2;

dynamic sum3({var num1, var num2}) => num1 + num2;

dynamic sum4(var num1, {var num2}) => num1 + num2;

dynamic sum5(var num1, {var num2}) => num1 + (num2 ?? 0);

dynamic sum6(var num1, {var num2 = 0}) => num1 + num2;

dynamic sum7(var num1, [var num2]) => num1 + (num2 ?? 0);
