// 자바와 연결 리스트로 구현한 스택
// 연결 리스트를 실제 구현하는 클래스
public class LinkList {

    private Link first;

    // LinkList 생성자
    public LinkList() {
        first = null;
    }

    // 비어 있다면, null을 반환
    public boolean isEmpty() {
        return first == null;
    }

    // 리스트의 첫 번째에 새로운 리스트의 삽입
    public void insert(int d1, double d2) {
        Link link = new Link(d1, d2);
        link.nextLink = first;
        first = link;
    }

    // 리스트의 첫 번째 원소를 제거
    public Link delete() {
        Link temp = first;
        first = first.nextLink;
        return temp;
    }

    // 데이터의 출력
    public void printList() {
        Link currentLink = first;
        System.out.print("List: ");
        while (currentLink != null) {
            currentLink.printLink();
            currentLink = currentLink.nextLink;
        }
        if (first == null) System.out.println("null");
        System.out.println();
    }
}
