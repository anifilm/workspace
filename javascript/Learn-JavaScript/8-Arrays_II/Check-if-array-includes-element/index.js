/**
 * @param {array} cities
 */
const containsAmsterdam = cities => {
    return cities.includes("Amsterdam");
}

//sample usage
console.log(containsAmsterdam(["Brussels", "Amsterdam", "Oslo"]));
