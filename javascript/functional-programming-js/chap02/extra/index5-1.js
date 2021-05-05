function applyOperation(a, b, opt) {
  return opt(a, b);
}

const muliplier = (a, b) => a * b;

applyOperation(2, 3, muliplier); // -> 6
