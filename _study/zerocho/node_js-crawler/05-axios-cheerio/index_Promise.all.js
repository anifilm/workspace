// 크롤링시 Promise.all 사용시
const xlsx = require('xlsx');
const axios = require('axios'); // ajax 라이브러리
const cheerio = require('cheerio'); // html 파싱

const workbook = xlsx.readFile('xlsx/data.xlsx');
const ws = workbook.Sheets.영화목록;
const records = xlsx.utils.sheet_to_json(ws);

const crawler = async () => {
  // 요청을 동시에 보내고 받으므로 순서가 보장되지 않는다.
  await Promise.all(records.map(async (r) => {
    const response = await axios.get(r.링크);
    if (response.status === 200) { // 응답이 성공한 경우
      const html = response.data;
      const $ = cheerio.load(html);
      const text = $('.score.score_left .star_score').text();
      console.log(r.제목, '평점', text.trim());
    }
  }));
};

crawler();