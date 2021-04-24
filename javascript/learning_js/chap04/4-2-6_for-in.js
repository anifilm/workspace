// 4.2.6 for...in 루프

const player = { name: 'Thomas', rank: 'Midshipman', age: 25 };
for (let prop in player) {
  if (!player.hasOwnProperty(prop)) continue;
  console.log(prop + ': ' + player[prop]);
}
