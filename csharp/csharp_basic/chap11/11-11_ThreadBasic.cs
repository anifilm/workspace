using System;
using System.Threading;

class ThreadBasic {
    static void Main(string[] args) {
        // 스레드 실행
        Thread threadA = new Thread(() => {
            for (int i = 0; i < 1000; i++) {
                Console.Write("A");
            }
        });
        Thread threadB = new Thread(() => {
            for (int i = 0; i < 1000; i++) {
                Console.Write("B");
            }
        });
        Thread threadC = new Thread(() => {
            for (int i = 0; i < 1000; i++) {
                Console.Write("C");
            }
        });

        threadA.Start();
        threadB.Start();
        threadC.Start();
    }
}
