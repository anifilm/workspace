// axios로 네이버 영화 페이지에서 이미지 다운로드하기
const xlsx = require('xlsx');
const puppeteer = require('puppeteer');
const axios = require('axios');
const fs = require('fs');
const add_to_sheet = require('./add_to_sheet');

const workbook = xlsx.readFile('xlsx/data.xlsx');
const ws = workbook.Sheets.영화목록;
const records = xlsx.utils.sheet_to_json(ws);

fs.readdir('screenshot', (err) => {
  if (err) {
    console.error('screenshot 폴더가 없어 screenshot 폴더를 생성합니다.');
    fs.mkdirSync('screenshot');
  }
});
fs.readdir('poster', (err) => {
  if (err) {
    console.error('poster 폴더가 없어 poster 폴더를 생성합니다.');
    fs.mkdirSync('poster');
  }
});

const crawler = async () => {
  try {
    const browser = await puppeteer.launch({ headless: false });
    const page = await browser.newPage();
    await page.setUserAgent('Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36');
    add_to_sheet(ws, 'C1', 's', '평점');
    for (const [i, r] of records.entries()) {
      await page.goto(r.링크);
      const result = await page.evaluate(() => {
        const scoreEl = document.querySelector('.score.score_left .star_score');
        let score = '';
        if (scoreEl) {
          score = scoreEl.textContent;
        }
        const imgEl = document.querySelector('.poster img');
        let img = '';
        if (imgEl) {
          img = imgEl.src;
        }
        return { score, img };
      });
      if (result.score) {
        console.log(r.제목, '평점', result.score.trim());
        const newCell = 'C' + (i + 2);
        add_to_sheet(ws, newCell, 'n', parseFloat(result.score.trim()));
      }
      await page.waitForTimeout(3000);
      if (result.img) {
        const imgResult = await axios.get(result.img.replace(/\?.*$/, ''), {
          responseType: 'arraybuffer',
        })
        fs.writeFileSync(`poster/${r.제목}.jpg`, imgResult.data);
      }
    }
    await page.close();
    await browser.close();
    xlsx.writeFile(workbook, 'xlsx/result.xlsx');
  } catch (e) {
    console.error(e);
  }
};

crawler();
