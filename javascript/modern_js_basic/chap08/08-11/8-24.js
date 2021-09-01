// 예제 8-24 HTML에서 사용할 수 없는 문자를 이스케이프 시퀀스로 바꾸기

function htmlEscape(strings, ...values) {
  function escape(s) {
    return s.replace(/&/g, '&amp;')
            .replace(/</g, '&lt;')
            .replace(/>/g, '&gt;')
            .replace(/'/g, '&#039;')
            .replace(/"/g, '&quot;')
            .replace(/`/g, '&#096;');
  }

  let result = strings[0];
  for (let i = 0; i < values.length; i++) {
    result += escape(values[i]) + strings[i+1];
  }
  return result;
}

const userinput = '<script>alert("test");</script>';
const message = htmlEscape`<p>${userinput}</p>`;
console.log(message); // <p>&lt;script&gt;alert(&quot;test&quot;);&lt;/script&gt;</p>
