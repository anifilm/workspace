const { URL } = require('url');

const myUrl = new URL('http://www.gilbut.co.kr/?page=3&limit=10&category=nodejs&category=javascript');
console.log('searchParams:', myUrl.searchParams);
console.log('searchParams.getAll():', myUrl.searchParams.getAll('category'));
console.log('searchParams.get():', myUrl.searchParams.get('limit'));
console.log('searchParams.has():', myUrl.searchParams.has('page'));
console.log('searchParams.keys():', myUrl.searchParams.keys());
console.log('searchParams.values():', myUrl.searchParams.values());

myUrl.searchParams.append('filter', 'es3');
myUrl.searchParams.append('filter', 'es5');
console.log(myUrl.searchParams.getAll('filter'));

myUrl.searchParams.set('filter', 'es6');
console.log(myUrl.searchParams.getAll('filter'));

myUrl.searchParams.delete('filter');
console.log(myUrl.searchParams.getAll('filter'));

console.log('searchParams.toString():', myUrl.searchParams.toString());
