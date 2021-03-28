using System;

class VarKeyword {
    // 2-50: 지역 변수
    // 오류 발생하므로 주석 처리
    //var global = 52; // 인스턴스 변수 (var 키워드 사용 불가)

    static void Main(string[] args) {
        // 2-48: var 키워드
        var number = 100;

        // 2-49: var 키워드의 제약
        // 오류 발생하므로 주석 처리
        var number2 = 10.2;
        //number2 = "변경";

        // 2-51: var 키워드의 선언과 초기화 동시 수행
        var number = 20;

        // 2-52: var 키워드를 사용한 다양한 자료형 선언
        var numberA = 100L;   // long 자료형
        var numberB = 100.0;  // double 자료형
        var numberC = 100.0F; // float 자료형
    }
}
