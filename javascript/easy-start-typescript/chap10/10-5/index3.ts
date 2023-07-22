function lengthOnly<T extends { length: number }>(value: T) {
  return value.length;
}

lengthOnly('hi');
lengthOnly([1, 2, 3]);
lengthOnly({ title: 'abc', length: 123 });
