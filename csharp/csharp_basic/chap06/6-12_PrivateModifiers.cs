using System;

namespace PrivateModifiers {
    // 6-13: 외부 클래스의 접근
    class Test {
        public void TestMethod() {
            //Program.Main(new string[] { "" });
        }
    }

    class Program {
        // 6-14: 내부 클래스에서의 접근
        class Test {
            public void TestMethod() {
                Program.Main(new string[] {""});
            }
        }

        // 6-12: Main() 메서드는 기본적으로 private 메서드
        static void Main(string[] args) {
            //
        }
    }
}
