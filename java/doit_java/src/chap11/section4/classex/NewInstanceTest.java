// Person 클래스의 인스턴스 생성하기
package chap11.section4.classex;

public class NewInstanceTest {
    public static void main(String[] args) throws ClassNotFoundException,
            InstantiationException, IllegalAccessException {

        Person person1 = new Person();  // 생성자로 생성하기
        System.out.println(person1);

        Class pClass = Class.forName("classex.Person");
        Person person2 = (Person)pClass.newInstance();  // Class 클래스의 newInstance() 메서드로 생성하기
        System.out.println(person2);
    }
}

/*

Class 클래스를 사용하는 방법은 클래스의 자료형을 직접 사용하여 프로그래밍하는 것보다 더 복잡
하고, 예외 처리도 해야 합니다. 이미 우리가 자료형을 알고 있는 클래스인 경우 또는 컴파일 할 때
직접 참조할 수 있는 클래스는 Class 클래스를 활용할 필요가 없습니다. 클래스의 정보를 모두 알고
있는 상황에서 리플렉션 프로그래밍을 하면 오히려 코드가 복잡해지고 속도도 느려집니다. 따라서
리플렉션 프로그래밍은 컴파일 시점에 알 수 없는 클래스, 즉 프로그램 실행 중에 클래스를 메모리에
로딩하거나 객체가 다른 곳에 위치해서 원격으로 로딩하고 생성할 때 사용합니다.

 */
