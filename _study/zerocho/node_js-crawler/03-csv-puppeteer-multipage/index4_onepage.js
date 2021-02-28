// 하나의 페이지에서 사람인것 처럼 자료 가져오기 (크롤링 시도 차단 대비)
const parse = require('csv-parse/lib/sync');
const stringify = require('csv-stringify/lib/sync');
const fs = require('fs');
const puppeteer = require('puppeteer');

const csv = fs.readFileSync('csv/data.csv');
const records = parse(csv.toString('utf-8'));

const crawler = async () => {
  const result = [];
  const browser = await puppeteer.launch({ headless: true });
  const page = await browser.newPage();
  await page.setUserAgent('Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36');
  for (const [i, r] of records.entries()) {
    await page.goto(r[1]);
    const text = await page.evaluate(() => {
      const score = document.querySelector('.score.score_left .star_score');
      if (score) {
        return score.textContent;
      }
    });
    if (text) {
      console.log(r[0], '평점', text.trim());
      result[i] = [r[0], r[1], text.trim()];
    }
    await page.waitForTimeout(3000);
  }
  await page.close();
  await browser.close();
  const str = stringify(result);
  fs.writeFileSync('csv/result2.csv', str);
};

crawler();
