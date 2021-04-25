// 11.5 try...catch...finally

try {
  console.log('this line is executed...');
  throw new Error('whoops');
  console.log('this line is not...');
} catch (err) {
  console.log('there was an error...');
} finally {
  console.log('...always executed');
  console.log('perform cleanup here');
}

// finally 블록은 에러가 일어나든, 일어나지 않든 반드시 호출된다.
