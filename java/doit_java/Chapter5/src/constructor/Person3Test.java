// 생성자 테스트하기
package constructor;

public class Person3Test {
    public static void main(String[] args) {

    //  Person3 personLim = new Person3();  // 오류 발생
    }
}

/*

오류가 난 이유는 생성자를 직접 구현하여 디폴트 생성자가 없기 때문입니다. 자바 컴파일러는
생성자가 하나도 없는 경우에만 디폴트 생성자를 제공합니다. 프로그래머가 생성자를 직접 추가
하면 디폴트 생성자는 만들어지지 않습니다.
따라서 Person3Test 코드는 디폴트 생성자가 없어서 오류가 난 것입니다. 오류를 없애려면
매개변수가 있는 생성자로 호출하거나 프로그래머가 디폴트 생성자를 추가로 직접 구현 하면 됩니다.

 */
