// 하나의 페이지에서 사람인것 처럼 자료 가져오기 (크롤링 시도 차단 대비)
const xlsx = require('xlsx');
const puppeteer = require('puppeteer');
const add_to_sheet = require('./add_to_sheet');

const workbook = xlsx.readFile('xlsx/data.xlsx');
const ws = workbook.Sheets.영화목록;
const records = xlsx.utils.sheet_to_json(ws);

const crawler = async () => {
  try {
    const browser = await puppeteer.launch({ headless: true });
    const page = await browser.newPage();
    await page.setUserAgent('Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36');
    add_to_sheet(ws, 'C1', 's', '평점');
    for (const [i, r] of records.entries()) {
      await page.goto(r.링크);
      const text = await page.evaluate(() => {
        const score = document.querySelector('.score.score_left .star_score');
        if (score) {
          return score.textContent;
        }
      });
      if (text) {
        console.log(r.제목, '평점', text.trim());
        const newCell = 'C' + (i + 2);
        add_to_sheet(ws, newCell, 'n', text.trim());
      }
      await page.waitForTimeout(3000);
    }
    await page.close();
    await browser.close();
    xlsx.writeFile(workbook, 'xlsx/result.xlsx');
  } catch (e) {
    console.error(e);
  }
};

crawler();
