/*
2. 타입 매개변수가 T이며, T 타입의 인자를 전달받고 void를 반환하는 add 이름의 메서드와, 매개변수 없이 T 타입을 반환하는 get 이름의 메서드를
가진 제네릭 인터페이스 MyList를 작성하라.

 */
package chap07.section3.checktime;

interface MyList<T> {
    public void add(T obj);
    public T get();
}

public class CH2 {}
