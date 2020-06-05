package main

import (
	"fmt"
	"time"
)

func main() {
	ch := make(chan bool)
	people := [2]string{"anifilm", "flynn"}
	for _, person := range people {
		go isSexy(person, ch)
	}
	fmt.Println(<-ch)
	fmt.Println(<-ch)
}

func isSexy(person string, ch chan bool) {
	time.Sleep(time.Second * 5)
	fmt.Println(person)
	ch <- true
}
