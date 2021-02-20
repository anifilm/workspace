Array.filter recap
Last updated February 2021
You can filter arrays by using the .filter(callback) method.
The result will be another array that contains 0 or more elements based on the condition that you have in the callback.

Here's an example:


const grades = [10, 2, 21, 35, 50, -10, 0, 1];

//get all grades > 20
const result = grades.filter(grade => grade > 20); // [21, 35, 50];

// get all grades > 30
grades.filter(grade => grade > 30); // [35, 50]
