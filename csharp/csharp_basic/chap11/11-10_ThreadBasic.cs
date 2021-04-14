using System;
using System.Threading;

class ThreadBasic {
    static void Main(string[] args) {
        // Thread 클래스의 인스턴스 생성
        Thread threadA = new Thread(TestMethod);
        Thread threadB = new Thread(delegate() {

        });
        Thread threadC = new Thread(() => {

        });
    }

    public static void TestMethod() {

    }
}
