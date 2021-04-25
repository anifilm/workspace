// 11.3 에러 일으키기

function billPay(amount, payee, account) {
  if (amount > account.balance) {
    throw new Error('insufficient funds');
  }
  account.transfer(payee, amount);
}

/*
throw가 호출되면 현재 함수는 즉지 실행을 멈추며, 따라서 위 예제에서는 account.transfer가 호출되지 않으므로 잔고가 부족한데도 현금을 찾아가는 사고는 발생하지 않는다.
*/
