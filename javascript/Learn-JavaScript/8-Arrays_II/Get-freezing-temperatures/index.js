/**
 * @param {array} temperatures
 */
const getFreezingTemperatures = temperatures => {
    return temperatures.filter(temperature => temperature < 0);
}

//sample usage
console.log(getFreezingTemperatures([5, -20, 37]));
