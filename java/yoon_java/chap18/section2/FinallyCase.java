// finally 구문
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.Files;
import java.io.BufferedWriter;
import java.io.IOException;

class FinallyCase {
    public static void main(String[] args) {
        Path file = Paths.get("./simple.txt");
        BufferedWriter writer = null;

        try {
            writer = Files.newBufferedWriter(file);  // IOException 발생 가능
            writer.write('A');  // IOException 발생 가능
            writer.write('Z');  // IOException 발생 가능
        }
        catch (IOException e) {
            e.printStackTrace();
        }
        finally {
            if (writer != null)
                writer.close();  // IOException 발생 가능으로 finally 구문 오류
        }
    }
}
