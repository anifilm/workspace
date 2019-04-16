package constructor;

public class PersonTest {

    public static void main(String[] args) {

        Person personLim = new Person();
        personLim.name = "임채영";
        personLim.height = 170.2F;
        personLim.weight = 72.8F;                               // 디폴드 생성자로 클래스를 생성한 후 인스턴스 변수 값을 따로 초기화
        
        Person personJung = new Person("정흥규", 168, 74);      // 인스턴스 변수 초기화와 동시에 클래스 생성
    }
}