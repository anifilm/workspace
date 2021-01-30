// Exception을 상속하는 예외 클래스의 예외처리
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.Files;
import java.io.BufferedWriter;
import java.io.IOException;

class IOExceptionCase2 {
    public static void main(String[] args) {
        Path file = Paths.get("./simple.txt");
        BufferedWriter writer = null;

        writer = Files.newBufferedWriter(file);  // IOException 발생 가능
        writer.write('A');  // IOException 발생 가능
        writer.write('Z');  // IOException 발생 가능

        if (writer != null)
            writer.close();  // IOException 발생 가능
    }
}
