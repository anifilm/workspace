// 4.1.6 do...while 루프

let remaining = totalBet;
do {
  let bet = rand(1, remaining);
  let face = randFace();
  bets[face] = bet[face] + bet;
  remaining = ramaining - bet;
} while (remaining > 0);
