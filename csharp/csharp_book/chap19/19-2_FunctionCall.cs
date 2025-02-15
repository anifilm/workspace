using System;

// 함수(Function): 반복하여 사용하도록 하나의 이름으로 만들어 놓은 코드의 집합

// 함수 정의 및 호출
class FunctionCall {
    //[1] 함수 만들기(정의, 선언)
    static void Hi() {
        Console.WriteLine("안녕하세요.");
    }

    static void Main() {
        //[2] 함수 사용하기(호출): 여러 번 호출
        Hi(); Hi(); Hi();
    }
}
