const http = require('http');
const fs = require('fs').promises;
const url = require('url');
const qs = require('querystring');

const parseCookies = (cookie='') => {
  return cookie.split(';').map((v) => v.split('=')).reduce((acc, [k, v]) => {
    acc[k.trim()] = decodeURIComponent(v);
    return acc;
  }, {});
}

http
  .createServer(async (req, res) => {
    const cookies = parseCookies(req.headers.cookie); // { mycookie: 'test' }

    if (req.url.startsWith('/login')) { // 주소가 /login으로 시작하는 경우
      const { query } = url.parse(req.url);
      const { name } = qs.parse(query);

      const expires = new Date();
      expires.setMinutes(expires.getMinutes() + 10); // 쿠키 유효시간 10분으로 설정

      res.writeHead(302, {
        Location: '/',
        'Set-Cookie': `name=${encodeURIComponent(name)}; Expires=${expires.toGMTString()}; HttpOnly; Path=/`,
      });
      res.end();
    }
    else if (cookies.name) { // name이라는 쿠키가 있는 경우
      res.writeHead(200, { 'Content-Type': 'text/plain; charset=utf-8' });
      res.end(`${cookies.name}님 안녕하세요.`);
    }
    else {
      try {
        const data = await fs.readFile('./cookie.html');
        res.writeHead(200, { 'Content-Type': 'text/html; charset=utf-8' });
        res.end(data);
      }
      catch (err) {
        res.writeHead(500, { 'Content-Type': 'text/plain; charset=utf-8' });
        res.end(err.message);
      }
    }
  })
  .listen(8080, () => {
    console.log('8080번 포트에서 서버 대기중...');
  });
