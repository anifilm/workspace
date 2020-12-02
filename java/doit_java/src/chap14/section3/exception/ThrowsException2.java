// 여러 catch문 사용하기
package chap14.section3.exception;
import java.io.FileInputStream;
import java.io.FileNotFoundException;

public class ThrowsException2 {
    public Class loadClass(String fileName, String className) throws FileNotFoundException, ClassNotFoundException {
        FileInputStream fis = new FileInputStream(fileName);
        Class c = Class.forName(className);
        return c;
    }

    public static void main(String[] args) {

        ThrowsException test = new ThrowsException();

        try {
            test.loadClass("a.txt", "java.lang.String");
        }catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
