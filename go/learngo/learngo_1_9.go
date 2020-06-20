package main

import "fmt"

func main() {
    names := [5]string{"nico", "lynn", "dal"}
    names[3] = "anne"
    names[4] = "lim"
    fmt.Println(names)

    names2 := []string{"john", "annie", "kim"}
    names2 = append(names2, "flynn")
    fmt.Println(names2)
}
