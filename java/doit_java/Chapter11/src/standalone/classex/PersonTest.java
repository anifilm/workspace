/*
나 혼자 코딩!
Person 클래스 정보 가져오기
379쪽에서 만든 Person 클래스의 Class 클래스를 가져와서 getConstructors(), getMethods(),
getFields() 메서드를 사용해 생성자, 메서드, 멤버 변수(필드) 정보를 출력해 보세요.
 */
package standalone.classex;

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class PersonTest {
    public static void main(String[] args) {

        Person person = new Person();
        Class personClass = person.getClass();  // Object의 getClass() 메서드 사용하기

        Constructor[] cons = personClass.getConstructors();    // 모든 생성자 가져오기
        for (Constructor c : cons) {
            System.out.println(c);
        }
        System.out.println();

        Method[] methods = personClass.getMethods();   // 모든 메서드 가져오기
        for (Method m : methods) {
            System.out.println(m);
        }
        System.out.println();

        Field[] fields = personClass.getFields();  // 모든 멤버 변수(필드) 가져오기
        for (Field f : fields) {
            System.out.println(f);
            System.out.println(f.getName());
        }
    }
}
