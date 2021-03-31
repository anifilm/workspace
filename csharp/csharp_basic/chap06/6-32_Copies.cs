using System;

class Test {
    public int value = 10;
}

class Copies {
    // 매개변수 Test input = test; 객체를 참조로 전달 받음
    static void Change(Test input) {
        input.value = 20; // 참조된 객체의 값을 변경
    }

    static void Main(string[] args) {
        // 6-22 참조 복사 예
        Test test = new Test();
        test.value = 10;
        Change(test); // 객체를 전달
        Console.WriteLine(test.value); // 20

        // 6-33: 간단한 참조 복사 예
        Test testA = new Test();
        Test testB = testA; // testA 객체의 메모리 주소값을 testB 변수에 전달 (testB는 testA가 가리키는 메모리 주소를 참조)
        testA.value = 10;
        testB.value = 20;
        Console.WriteLine(testA.value); // 20, testB객체 값 수정에 대해 영향을 받는다. (같은 메모리 주소를 참조)
    }
}
