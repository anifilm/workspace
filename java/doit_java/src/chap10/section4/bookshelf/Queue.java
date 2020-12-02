// Queue 인터페이스 정의하기
package chap10.section4.bookshelf;

public interface Queue {
    void enQueue(String title); // 배열 맨 마지막에 추가
    String deQueue();           // 배열 맨 처음 항목 반환
    int getSize();              // 현재 Queue에 있는 개수 반환
}
