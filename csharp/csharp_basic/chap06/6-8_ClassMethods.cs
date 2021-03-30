using System;

class ClassMethods {

    public int instanceVariableA = 10; // 클래스의 인스턴스(멤버) 변수
    public static int instanceVariableB = 10; // 클래스의 정적 변수

    static void Main(string[] args) {
        // 6-8: 정적 메서드에서 인스턴스(멤버) 변수 사용시 오류 발생
        //Console.WriteLine(instanceVariableA);

        // 6-9: 정적 메서드에서는 정적 변수 사용 가능
        Console.WriteLine(instanceVariableB);
    }
}
