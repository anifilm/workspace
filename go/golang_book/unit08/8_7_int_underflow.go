// 오버플로우와 언더플로우 3
package main

func main() {
    var num1 uint8 = 0 - 1  // 오버플로우 컴파일 에러 발생
    var num2 uint16 = 0 - 1 // 오버플로우 컴파일 에러 발생
    var num3 uint32 = 0 - 1 // 오버플로우 컴파일 에러 발생
    var num4 uint64 = 0 - 1 // 오버플로우 컴파일 에러 발생
}
