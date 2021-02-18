/**
 * @param {array} numbers
 */
function sumPositiveNumbers(numbers){
    let sum = 0;
    numbers.forEach(function(number) {
        if (number > 0){
            sum += number;
        }
    })
    return sum;
}

//sample usage
console.log(sumPositiveNumbers([15, -5, 10]));
