// 연산자 우선순위 1
package main

import "fmt"

func main() {
    a := 8 + 10/2
    fmt.Println(a) // 13
}

/*
[연산자 우선순위]
우선순위   연산자
   5      *  /  %  <<  >>  &  &^
   4      +  -  |  ^
   3      ==  !=  <  <=  >  >=
   2      &&
   1      ||
*/
