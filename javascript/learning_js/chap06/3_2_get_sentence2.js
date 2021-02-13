function getSentence([ subject, verb, object ]) {
    return `${subject} ${verb} ${object}`;
}

const arr = [ "I", "love", "JavaScript" ];

getSentence(arr);  // "I love JavaScript"
