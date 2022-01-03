const url = require('url');

// WHATWG 방식
const { URL } = url;
const myUrl = new URL('http://www.gilbut.co.kr/book/bookList.aspx?sercate1=001001000#anchor');
console.log('new URL():', myUrl);
console.log('url.format():', url.format(myUrl));
console.log('------------------------------');

// 기존 노드 방식
const parsedUrl = url.parse('http://www.gilbut.co.kr/book/bookList.aspx?sercate1=001001000#anchor');
console.log('url.parse():', parsedUrl);
console.log('url.format():', url.format(parsedUrl));
