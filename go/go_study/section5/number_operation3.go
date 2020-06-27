// 테이터 타입: Numeric 연산 3
package main

import "math"

func main() {
    // 숫자 연산 (산술, 비교)
    // 같은 타입끼리만 연산 가능
    // 다른 타입의 연산은 반드시 형변환 후 연산
    // 형변환 없을 경우 예외(에러) 발생
    // +, -, *, /, %, >>, <<, &, ^...

    // 예제 1 (오버플로우 에러: 범위 초과)
    var n1 uint8 = math.MaxUint8 + 1
    var n2 uint16 = math.MaxUint16 + 1
    var n3 uint32 = math.MaxUint32 + 1
    var n4 uint64 = math.MaxUint64 + 1

    // 예제 2 (오버플로우 에러: 범위 미만)
    var n1 uint8 = -1
    var n2 uint16 = -1
    var n3 uint32 = -1
    var n4 uint64 = -1
}
