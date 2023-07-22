function printTextLength<T>(text: T[]) {
  console.log(text.length);
}

printTextLength<string>(['a', 'b', 'c']); // 3
printTextLength<number>([100]); // 1
printTextLength([true, false]); // 2
