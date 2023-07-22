type DeveloperKeys = keyof { name: string; skill: string };

function printKeys<T extends keyof { name: string; skill: string }>(value: T) {
  console.log(value);
}

printKeys('address');
printKeys(100);
