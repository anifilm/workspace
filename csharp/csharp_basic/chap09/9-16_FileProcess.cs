using System;
using System.IO;

class FileProcess {
    static void Main(string[] args) {
        // 파일에 문자열 쓰기
        File.WriteAllText("./test.txt", "문자열을 파일에 씁니다.");
    }
}
