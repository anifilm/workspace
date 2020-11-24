// Shelf 클래스 만들기
package bookshelf;
import java.util.ArrayList;

public class Shelf {
    // 자료를 순서대로 저장할 ArrayList 선언
    protected ArrayList<String> shelf;

    // 디폴트 생성자로 Shelf 클래스를 생성하면 ArrayList도 생성됨
    public Shelf() {
        shelf = new ArrayList<String>();
    }

    public ArrayList<String> getShelf() {
        return shelf;
    }

    public int getCount() {
        return shelf.size();
    }
}
