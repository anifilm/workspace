// 한 클래스가 여러 인터페이스를 구현하는 경우
package interfaceex2;

public interface Buy {
    void buy();

    default void order(){
        System.out.println("구매 주문");
    }
}




