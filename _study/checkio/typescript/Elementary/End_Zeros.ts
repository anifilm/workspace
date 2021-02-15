import assert from "assert";

function endZeros(value: number): number {
    // your code here
    let str_num = String(value);
    let ans = 0;
    for (let i = str_num.length-1; i >= 0; i--) {
        if (str_num[i] === '0') {
            ans += 1;
        } else {
            break;
        }
    }
    return ans;
}

console.log('Example:');
console.log(endZeros(0));

// These "asserts" are used for self-checking
assert.equal(endZeros(0), 1);
assert.equal(endZeros(1), 0);
assert.equal(endZeros(10), 1);
assert.equal(endZeros(101), 0);
assert.equal(endZeros(245), 0);
assert.equal(endZeros(100100), 2);

console.log("Coding complete? Click 'Check' to earn cool rewards!");
