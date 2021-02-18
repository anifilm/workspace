/**
 * @param {array} numbers
 */
function sumOddNumbers(numbers){
    let sumOdd = 0;
    numbers.forEach(function(number) {
        if (number % 2 !== 0){
            sumOdd += number;
        }
    });
    return sumOdd;
}

//sample usage
console.log(sumOddNumbers([15, -5, 10]));
