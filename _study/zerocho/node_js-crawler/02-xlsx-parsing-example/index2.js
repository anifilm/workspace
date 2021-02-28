// xlsx 파일에서 영화목록에 있는 데이터 가져오기 2
const xlsx = require('xlsx');
//const axios = require('axios'); // ajax 라이브러리
//const cheerio = require('cheerio'); // html 파싱

const workbook = xlsx.readFile('xlsx/data.xlsx');

// 시트별로 따로 코딩
//console.log(workbook.SheetNames);
//for (const name of workbook.SheetNames) {
//  console.log(name);
//  const ws = workbook.Sheets.name;
//}

const ws = workbook.Sheets[workbook.SheetNames[0]];
console.log(ws['!ref']);

// 레코드 배열을 시프트해서 제목 줄을 제거할 수 있다.
//const records = xlsx.utils.sheet_to_json(ws, { header: 'A' });
//records.shift();
//console.log(records);

// 또는 직접 대입도 가능
//ws['!ref'] = 'A2:B11';

ws['!ref'] = ws['!ref'].split(':').map((v, i) => {
  if (i === 0) {
    return 'A2';
  }
  return v
}).join(':');

const records = xlsx.utils.sheet_to_json(ws, { header: 'A' });
console.log(records);
