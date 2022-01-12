// 테이터 타입: Numeric 연산 1
package main

import (
    "fmt"
    "math"
)

func main() {
    // 숫자 연산 (산술, 비교)
    // 같은 타입끼리만 연산 가능
    // 다른 타입의 연산은 반드시 형변환 후 연산
    // 형변환 없을 경우 예외(에러) 발생
    // +, -, *, /, %, >>, <<, &, ^...

    // 예제 1 (최대값 확인)
    var n1 uint8 = math.MaxUint8   // 255
    var n2 uint16 = math.MaxUint16 // 65535
    var n3 uint32 = math.MaxUint32 // 4294967295
    var n4 uint64 = math.MaxUint64 // 18446744073709551615

    fmt.Println("ex1-1:", n1)
    fmt.Println("ex1-2:", n2)
    fmt.Println("ex1-3:", n3)
    fmt.Println("ex1-4:", n4)
    fmt.Println("ex1-5:", math.MaxInt8)     // 127
    fmt.Println("ex1-6:", math.MaxInt16)    // 32767
    fmt.Println("ex1-7:", math.MaxInt32)    // 2147483647
    fmt.Println("ex1-8:", math.MaxInt64)    // 9223372036854775807
    fmt.Println("ex1-9:", math.MinInt8)     // -128
    fmt.Println("ex1-10:", math.MinInt16)   // -32768
    fmt.Println("ex1-11:", math.MinInt32)   // -2147483648
    fmt.Println("ex1-12:", math.MinInt64)   // -9223372036854775808
    fmt.Println("ex1-13:", math.MaxFloat32) // 3.4028234663852886e+38
    fmt.Println("ex1-14:", math.MaxFloat64) // 1.7976931348623157e+308

    // 예제 2 (형변환)
    n5 := 100000       // int
    n6 := int16(10000) // max 32767
    n7 := uint8(100)   // max 255

    // fmt.Println("ex2-1:", n5+n6)    // 예외 발생 (컴파일 에러)
    // fmt.Println("ex2-2:", n6+n7)    // 예외 발생 (컴파일 에러)
    fmt.Println("ex2-1:", n5+int(n6))
    fmt.Println("ex2-2:", n6+int16(n7))
    fmt.Println("ex2-3:", n6 > int16(n7))
    fmt.Println("ex2-4:", n6-int16(n7) > 5000)
}
