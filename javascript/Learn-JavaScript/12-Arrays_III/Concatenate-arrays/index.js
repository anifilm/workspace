/**
 * @param {array} first_half_2018
 * @param {array} second_half_2018
 */
const concatTwoArrays = (first_half_2018, second_half_2018) => {
    return [...first_half_2018, ...second_half_2018];
}

//sample usage
console.log(concatTwoArrays(["Calculator", "Whatsapp"], ["Chrome", "Firefox"]));
