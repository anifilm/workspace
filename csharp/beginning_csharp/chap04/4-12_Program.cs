using System;

class Program {
    static void Main(string[] args) {
        /*
        int n = 5;
        if ((n as string) != null) { // 오류 발생
            Console.WriteLine("변수 n은 string 타입");
        }

        string txt = "text";
        if ((txt as int) != null) { // 오류 발생
            Console.WriteLine("변수 txt는 int 타입");
        }
        */
        int n = 5;
        if (n is string) { // n은 string 타입 인가? false
            Console.WriteLine("변수 n은 string 타입");
        }

        string txt = "text";
        if (txt is int) { // n은 int 타입 인가? false
            Console.WriteLine("변수 txt는 int 타입");
        }
    }
}
