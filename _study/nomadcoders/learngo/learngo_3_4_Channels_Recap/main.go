package main

import (
	"fmt"
	"time"
)

func main() {
	ch := make(chan string)
	people := [5]string{"anifilm", "flynn", "dal", "larry", "james"}
	for _, person := range people {
		go isSexy(person, ch)
	}
	for i := 0; i < len(people); i++ {
		fmt.Println("Waiting for", i)
		fmt.Println(<-ch)
	}

}

func isSexy(person string, ch chan string) {
	time.Sleep(time.Second * 5)
	ch <- person + " is sexy"
}
