// csv의 목록에 있는 영화 페이지에서 평점 가져오기
const parse = require('csv-parse/lib/sync');
const fs = require('fs');
const puppeteer = require('puppeteer');

const csv = fs.readFileSync('csv/data.csv');
const records = parse(csv.toString('utf-8'));

const crawler = async () => {
  const browser = await puppeteer.launch({ headless: process.env.NODE_ENV === 'production' });
  await Promise.all(records.map(async (r, i) => {
    const page = await browser.newPage();
    await page.goto(r[1]);
    const scoreEl = await page.$('.score.score_left .star_score');
    if (scoreEl) {
      const text = await page.evaluate(tag => tag.textContent, scoreEl);
      console.log(r[0], '평점', text.trim());
    }
    await page.close();
  }));
  await browser.close();
};

crawler();
