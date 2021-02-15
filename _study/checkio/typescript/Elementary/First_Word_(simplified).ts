import assert from "assert";

function firstWord(text: string): string {
    // your code here
    return text.split(' ')[0] ;
}

console.log('Example:');
console.log(firstWord('Hello world'));

// These "asserts" are used for self-checking
assert.equal(firstWord('Hello world'), 'Hello');
assert.equal(firstWord('a word'), 'a');
assert.equal(firstWord('hi'), 'hi');

console.log("Coding complete? Click 'Check' to earn cool rewards!");
