// 10.1 나머지 매개변수

// 10.1.1 다른 매개변수와 사용

function add(a, b, ...args) {
  console.log(a, b, args);

  let sum = a + b;

  for (let i = 0; i < args.length; i++) {
    sum += args[i];
  }

  return sum;
}

const sum = add(1, 2, 3, 4, 5); // 1 2 [3, 4, 5]

console.log(sum); // 15


// 10.1.2 단독 사용

function add(...args) {
  console.log(args);

  let sum = 0;

  for (let i = 0; i < args.length; i++) {
    sum += args[i];
  }

  return sum;
}

const sum = add(1, 2, 3, 4, 5); // [1, 2, 3, 4, 5]

console.log(sum); // 15
