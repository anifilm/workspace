/**
 * @param {string[]} names
 */
const namesInUpperCase = names => {
    return names.map(name => name.toUpperCase());
}

//sample usage
console.log(namesInUpperCase(["John", "Jennifer", "Liham"]));
