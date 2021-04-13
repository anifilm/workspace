using System;
using System.IO;

class FileProcess {
    static void Main(string[] args) {
        // using 구문에서 StreamReader 클래스의 인스턴스 생성 (스트림으로 읽기)
        using (StreamReader reader = new StreamReader("./test3.txt")) {
            string line = reader.ReadLine(); // 파일에서 한줄 읽어옴
            Console.WriteLine(line);
        }
    }
}
