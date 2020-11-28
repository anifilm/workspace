// TreeSet 활용하기
package collection.treeset;
import java.util.TreeSet;
import java.util.Iterator;

public class MemberTreeSet {
    private TreeSet<Member> treeSet;        // TreeSet 선언

    public MemberTreeSet() {
        treeSet = new TreeSet<Member>();    // TreeSet 생성
    }
    // TreeSet에 회원 추가
    public void addMember(Member member) {
        treeSet.add(member);
    }
    // 해당 아이디를 가진 회원을 TreeSet에서 찾아 제거함
    public boolean removeMember(int memberId) {
        Iterator<Member> ir = treeSet.iterator();   // Iterator 반환
        while (ir.hasNext()) {              // 요소가 있는 동안
            Member member = ir.next();      // 다음 회원을 반환받음
            int tempId = member.getMemberId();
            if (tempId == memberId) {       // 회원 아이디가 매개변수와 일치하면
                treeSet.remove(member);     // 해당 회원을 삭제
                return true;
            }
        }
        // while 문이 끝날 때까지 해당 아이디를 찾지 못한 경우
        System.out.println(memberId + "가 존재하지 않습니다.");
        return false;
    }
    // 전체 회원을 출력하는 메서드
    public void showAllMember() {
        for (Member member : treeSet) {
            System.out.println(member);
        }
        System.out.println();
    }
}
