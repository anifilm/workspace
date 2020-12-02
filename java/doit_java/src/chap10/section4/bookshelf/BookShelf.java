// BookShelf 클래스 구현하기
package chap10.section4.bookshelf;

public class BookShelf extends Shelf implements Queue {
    // 배열에 요소 추가
    @Override
    public void enQueue(String title) {
        shelf.add(title);
    }
    // 맨 처음 요소를 배열에서 삭제하고 반환
    @Override
    public String deQueue() {
        return shelf.remove(0);
    }
    // 배열 요소 개수 반환
    @Override
    public int getSize() {
        return getCount();
    }
}
