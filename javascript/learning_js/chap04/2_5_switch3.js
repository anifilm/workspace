function adjustBet(totalBet, funds) {
    switch (totalBet) {
        case 7:
            return funds;
        case 13:
            return 0;
        default:
            return totalBet;
    }
}

/*
위와 같이 함수에서 switch 문을 사용시 return 문으로 즉시 함수를 빠져나가므로 break 문 대신 사용할 수 있다.
*/
