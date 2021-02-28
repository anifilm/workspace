// 크롤링시 for of 사용시
const xlsx = require('xlsx');
const axios = require('axios'); // ajax 라이브러리
const cheerio = require('cheerio'); // html 파싱

const workbook = xlsx.readFile('xlsx/data.xlsx');
const ws = workbook.Sheets.영화목록;
const records = xlsx.utils.sheet_to_json(ws);

const crawler = async () => {
  // for of문을 await와 같이 사용하면 순서를 보장 받을 수 있다.
  for (const [i, r] of records.entries()) {
    const response = await axios.get(r.링크);
    if (response.status === 200) { // 응답이 성공한 경우
      const html = response.data;
      const $ = cheerio.load(html);
      const text = $('.score.score_left .star_score').text();
      console.log(r.제목, '평점', text.trim());
    }
  }
  // await Promise.all(records.map(async (r) => {
  //
  // }));
};

crawler();
