/** @param {string} name */
export function getNumberOfChars(name) {
  // return the number of characters in: name
  return name.length;
}

export function getFirstChar(name) {
  // return the first character of: name
  return name[0];
}

export function getLastChar(name) {
  // return the last character of: name
  return name[name.length - 1];
}

export function getLower(name) {
  // return name all in lower case (example: "ABC" becomes "abc")
  return name.toLowerCase();
}

export function getUpper(name) {
  // return name all in upper case (example: "abc" becomes "ABC")
  return name.toUpperCase();
}

export function getCapitalized(name) {
  // return a capitalized version of name (example: "alEX" becomes "Alex")
  return name[0].toUpperCase() + name.substring(1).toLowerCase()
}

export function getClean(name) {
  // return name without trailing and leading space (example: " alex " becomes: "alex")
  return name.trim()
}
