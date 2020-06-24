// Go 초기화 함수 3
package lib

import "fmt"

func init() {
	fmt.Println("lib3 Pakcage > init start!")
}

func CheckNum(c int32) bool {
	return c > 10
}
