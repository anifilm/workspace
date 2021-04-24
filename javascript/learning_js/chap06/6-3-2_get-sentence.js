// 6.3.2 매개 변수 해체 (객체를 변수로 해체)

function getSentence({ subject, verb, object }) {
  return `${subject} ${verb} ${object}`;
}

const o = {
  subject: 'I',
  verb: 'love',
  object: 'JavaScript',
};

getSentence(o); // "I love JavaScript"
