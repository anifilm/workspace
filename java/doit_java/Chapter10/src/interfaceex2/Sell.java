// 한 클래스가 여러 인터페이스를 구현하는 경우
package interfaceex2;

public interface Sell {
    void sell();

    default void order(){
        System.out.println("판매 주문");
    }
}



