package main

import (
	"fmt"

	"./accounts"
)

func main() {
	account := accounts.NewAccount("anifilm")
	account.Deposit(10)
	fmt.Println(account)
	err := account.Withdraw(20)
	if err != nil {
		// log.Fatalln(err)
		fmt.Println(err)
	}
}
