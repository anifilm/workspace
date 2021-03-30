using System;

namespace PublicModifiers {
    // public 접근 제한자를 붙인 Main() 메서드
    class Test {
        public void TestMethod() {
            Program.Main(new string[] {""});
        }
    }

    class Program {
        public static void Main(string[] args) {
            //
        }
    }
}
