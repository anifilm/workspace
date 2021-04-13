using System;
using System.IO;

class FileProcess {
    static void Main(string[] args) {
        // StreamWriter 클래스로 파일에 문자열 쓰기 (스트림으로 쓰기)
        using (StreamWriter writer = new StreamWriter("./test3.txt")) {
            writer.WriteLine("안녕하세요");
            writer.WriteLine("StreamWriter 클래스를 사용해");
            writer.WriteLine("글자를 여러 줄 입력해봅니다.");

            for (int i = 0; i < 10; i++) {
                writer.WriteLine("반복문 - " + i);
            }
        }

        Console.WriteLine(File.ReadAllText("./test3.txt"));
    }
}
