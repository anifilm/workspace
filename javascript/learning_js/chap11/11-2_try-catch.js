// 11.2 try/catch와 예외 처리

const email = null;

try {
  const validatedEmail = validatedEmail(email);
  if (validateEmail instanceof Error) {
    console.error(`Error: ${validateEmail.message}`);
  } else {
    console.log(`Valid email: ${validateEmail}`);
  }
} catch (err) {
  console.error(`Error: ${err.message}`);
}
