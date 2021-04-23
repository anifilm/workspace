switch (totalBet) {
  case 7:
    totalBet = funds;
    break;
  case 11:
  case 13:
    totalBet = 0;
    break;
  case 21:
    totalBet = 21;
    break;
}
