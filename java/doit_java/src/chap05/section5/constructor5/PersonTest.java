// 테스트 클래스 구현하기
package chap05.section5.constructor5;

public class PersonTest {
    public static void main(String[] args) {

        // 디폴드 생성자로 클래스를 생성한 후 인스턴스 변수 값을 따로 초기화
        Person personLim = new Person();
        personLim.name = "임채영";
        personLim.height = 169.8F;
        personLim.weight = 67.8F;

        // 인스턴스 변수 초기화와 동시에 클래스 생성
        Person personJung = new Person("정흥규", 168, 82);
    }
}
