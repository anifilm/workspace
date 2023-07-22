function getText<T>(text: T): T {
  return text;
}

getText<string>('hi'); // hi
getText<number>(10);   // 10
