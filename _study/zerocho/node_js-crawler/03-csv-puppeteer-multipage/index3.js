// page.evaluate() 사용시
const parse = require('csv-parse/lib/sync');
const stringify = require('csv-stringify/lib/sync');
const fs = require('fs');
const puppeteer = require('puppeteer');

const csv = fs.readFileSync('csv/data.csv');
const records = parse(csv.toString('utf-8'));

const crawler = async () => {
  const result = [];
  const browser = await puppeteer.launch({ headless: true });
  await Promise.all(records.map(async (r, i) => {
    const page = await browser.newPage();
    await page.goto(r[1]);
    // const scoreEl = await page.$('.score.score_left .star_score');
    // if (scoreEl) {
    //   const text = await page.evaluate(tag => tag.textContent, scoreEl);
    //   console.log(r[0], '평점', text.trim());
    //   result[i] = [r[0], r[1], text.trim()];
    // }
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
    await page.close();
  }));
  await browser.close();
  const str = stringify(result);
  fs.writeFileSync('csv/result2.csv', str);
};

crawler();
