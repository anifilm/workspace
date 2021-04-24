// 4.2.3 for 루프의 다른 패턴

for (let temp, i = 0, j = 1; j < 30; temp = i, i = j, j = i + temp)
  console.log(j);
