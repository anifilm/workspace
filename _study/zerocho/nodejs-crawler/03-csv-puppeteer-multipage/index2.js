// 가져온 평점을 새로운 csv에 저장하기
const parse = require('csv-parse/lib/sync');
const stringify = require('csv-stringify/lib/sync');
const fs = require('fs');
const puppeteer = require('puppeteer');

const csv = fs.readFileSync('csv/data.csv');
const records = parse(csv.toString('utf-8'));

const crawler = async () => {
  const result = [];
  const browser = await puppeteer.launch({ headless: process.env.NODE_ENV === 'production' });
  await Promise.all(records.map(async (r, i) => {
    const page = await browser.newPage();
    await page.goto(r[1]);
    const scoreEl = await page.$('.score.score_left .star_score');
    if (scoreEl) {
      const text = await page.evaluate(tag => tag.textContent, scoreEl);
      console.log(r[0], '평점', text.trim());
      // 순서없이 저장됨
      //result.push([r[0], r[1], text.trim()]);
      // 순서를 원본과 동일하게 저장
      result[i] = [r[0], r[1], text.trim()];
    }
    await page.close();
  }));
  await browser.close();
  const str = stringify(result);
  fs.writeFileSync('csv/result.csv', str);
};

crawler();
