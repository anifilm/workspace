import assert from "assert";

function isAcceptablePassword(password: string): boolean {
    // your code here
    return password.length > 6;
}

console.log('Example:');
console.log(isAcceptablePassword('short'));

// These "asserts" are used for self-checking
assert.equal(isAcceptablePassword('short'), false);
assert.equal(isAcceptablePassword('muchlonger'), true);
assert.equal(isAcceptablePassword('ashort'), false);

console.log("Coding complete? Click 'Check' to earn cool rewards!");
