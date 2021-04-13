using System;
using System.IO;

class FileProcess {
    static void Main(string[] args) {
        // StreamReader 클래스로 파일 한 줄씩 읽기 (스트림으로 읽기)
        using (StreamReader reader = new StreamReader("./test3.txt")) {
            string line;
            while ((line = reader.ReadLine()) != null) {
                Console.WriteLine(line);
            }
        }
    }
}
