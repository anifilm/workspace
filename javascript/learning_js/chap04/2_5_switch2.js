switch (totalBet) {
    case 7:
        totalBet = funds;
        break;
    case 13:
        funds = funds - 1;  // 1 펜스를 기부합니다!
    //  break;  // 사용자에 의한 break문 생략
    case 11:
        totalBet = 0;
        break;
    case 21:
        totalBet = 21;
        break;
    default:
        console.log("No superstition here!");
        break;
}

/*
default 뒤에는 case가 없으므로 break 문이 없어도 된다. 하지만 break 문을 사용하는것이 좋은 습관이다.
언제든 break 문을 주석 처리할 수 있으므로, 설명 break 없은 case 절을 사용하더라도 항상 break 문을
쓰는 습관을 들여야 한다.
*/
