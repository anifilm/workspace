// xlsx 파일에서 영화목록에 있는 데이터 가져오기
const xlsx = require('xlsx');

const workbook = xlsx.readFile('xlsx/data.xlsx');
const ws = workbook.Sheets.영화목록;
const records = xlsx.utils.sheet_to_json(ws);

// forEach로 출력
records.forEach((r, i) => {
  console.log(i, r.제목, r.링크)
})
console.log();

// for문으로 출력
for (const [i, r] of records.entries()) {
  console.log(i, r.제목, r.링크);
}
