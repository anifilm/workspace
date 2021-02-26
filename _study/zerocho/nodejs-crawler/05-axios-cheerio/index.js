// xlsx 목록에 있는 영화 페이지에서 평점 가져오기
const xlsx = require('xlsx');
const axios = require('axios'); // ajax 라이브러리
const cheerio = require('cheerio'); // html 파싱

const workbook = xlsx.readFile('xlsx/data.xlsx');
const ws = workbook.Sheets.영화목록;
const records = xlsx.utils.sheet_to_json(ws);

// for문으로 출력
// for (const [i, r] of records.entries()) {
//   console.log(i, r.제목, r.링크);
// }

const crawler = async () => {
  await Promise.all(records.map(async (r) => {
    const response = await axios.get(r.링크);
    if (response.status === 200) { // 응답이 성공한 경우
      const html = response.data;
      const $ = cheerio.load(html); // 제이쿼리를 사용할 수 있다.
      const text = $('.score.score_left .star_score').text();
      console.log(r.제목, '평점', text.trim());
    }
  }));
};

crawler();
