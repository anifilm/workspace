// 인터페이스 심화 4
package main

import (
    "fmt"
    "strconv"
)

type Account struct {
    number   string
    balance  float64
    interest float64
}

func structToMsg(arg interface{}) string {
    switch arg.(type) {
    case Account:
        o := arg.(Account)
        return "Account: " + o.number + " : " + strconv.FormatFloat((o.balance*o.interest+o.balance), 'f', -1, 64)
    case *Account:
        o := arg.(*Account)
        return "*Account: " + o.number + " : " + strconv.FormatFloat((o.balance*o.interest+o.balance), 'f', -1, 64)
    default:
        return "Error"
    }
}

func main() {
    // 예제
    fmt.Println(structToMsg(Account{number: "245-901", balance: 10000000, interest: 0.015}))
    fmt.Println(structToMsg(&Account{number: "245-902", balance: 12000000, interest: 0.035}))

    var user = new(Account)
    user.number = "245-903"
    user.balance = 15000000
    user.interest = 0.025

    fmt.Println(structToMsg(user))
}
