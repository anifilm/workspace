/**
 * @param {object} options
 * @param {object} defaultOptions
 */
const mergeOptions = (options, defaultOptions) => {
    return {...defaultOptions, ...options};
}

//sample usage
const options = {
    tabSize: 4,
};
const defaultOptions = {
    indentation: 'tab',
    tabSize: 2,
    language: 'javascript',
};
console.log(mergeOptions(options, defaultOptions));
