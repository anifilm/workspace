// String과 Integer 클래스의 hashCode() 메서드
package chap11.section1.object;

public class HashCodeTest {
    public static void main(String[] args) {

        String str1 = new String("abc");
        String str2 = new String("abc");

        // abc 문자열의 해시 코드 값 출력
        System.out.println(str1.hashCode());
        System.out.println(str2.hashCode());

        Integer i1 = new Integer(100);
        Integer i2 = new Integer(100);

        // Integer(100)의 해시 코드 값 출력
        System.out.println(i1.hashCode());
        System.out.println(i2.hashCode());
    }
}

/*

String 클래스는 같은 문자열을 가진 경우, 즉 equals() 메서드의 결과 값이 true인 경우
hashCode() 메서드는 동일한 해시 코드 값을 반환합니다.

Integer 클래스의 hashCode() 메서드는 정수 값을 반환하도록 재정의되어 있습니다.

 */
