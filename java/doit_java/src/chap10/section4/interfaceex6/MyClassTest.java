// 인터페이스 상속하기
package chap10.section4.interfaceex6;

public class MyClassTest {
    public static void main(String[] args) {

        MyClass myClass = new MyClass();

        X xClass = myClass;
        xClass.x();

        Y yClass = myClass;
        yClass.y();

        MyInterface iClass = myClass;
        iClass.myMethod();
        iClass.x();
        iClass.y();
    }
}
