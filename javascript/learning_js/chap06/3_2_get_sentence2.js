// 6.3.2 매개 변수 해체 (배열 해체)
function getSentence([ subject, verb, object ]) {
    return `${subject} ${verb} ${object}`;
}

const arr = [ "I", "love", "JavaScript" ];

getSentence(arr);  // "I love JavaScript"
