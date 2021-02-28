// axios로 네이버 영화 페이지 화면 스크린샷 저장하기
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
    const browser = await puppeteer.launch({
      headless: false,
      args: ['--window-size=1920,1080'] // 크롬 창 크기 옵션
    });
    const page = await browser.newPage();
    await page.setViewport({ // 화면 디스플레이 영역 설정
      width: 1920,
      height: 1080,
    });
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
        await page.screenshot({ // 페이지 스크린샷 저장
          path: `screenshot/${r.제목}.png`, // 저장경로 및 파일명
          fullPage: true, // 전체 화면 옵션
          //clip: { // 영역 지정 옵션
          //  x: 100,
          //  y: 100,
          //  width: 300,
          //  height: 300,
          }
        });
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
