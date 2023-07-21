type MyName = string;
const capt: MyName = '캡틴';

type MyMessage = string | number;
function logText(text: MyMessage) {
  console.log(text);
}

const message: MyMessage = '안녕하세요';
logText(message);
