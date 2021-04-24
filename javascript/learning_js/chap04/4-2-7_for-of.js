const hand = [randFace(), randFace(), randFace()];
for (let face of hand)
  console.log(`You rolled...${face}`);

/*
for...of는 배열에 루프를 실행해야 하지만 각 요소의 인덱스를 알 필요없을 때 알맞습니다.
인덱스를 알아야 한다면 일반적인 for 루프를 사용하십시오.
*/

for (let i = 0; i < hand.length; i++)
  colsole.log(`Roll ${i+1}: ${hand[i]}`);
