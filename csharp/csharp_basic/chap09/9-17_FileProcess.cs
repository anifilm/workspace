using System;
using System.IO;

class FileProcess {
    static void Main(string[] args) {
        // 9-17: @ 기호를 사용한 문자열(Verbatim String: 축자 문자열)
        // 윈도우 파일 경로 관련 내용
        // "C:\\test\\test.txt" -> @"C:\text\text.txt" 와 같이 쓸수 있다.
        File.WriteAllText(@"./test2.txt", "문자열을 파일에 씁니다.");

        // 9-18: 파일 읽기
        Console.WriteLine(File.ReadAllText("./test2.txt"));
    }
}
