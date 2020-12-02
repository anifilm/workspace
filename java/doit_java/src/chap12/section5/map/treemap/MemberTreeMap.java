// TreeMap 활용하기
package chap12.section5.map.treemap;
import map.Member;
import java.util.TreeMap;
import java.util.Iterator;

public class MemberTreeMap {
    private TreeMap<Integer, Member> treeMap;

    public MemberTreeMap() {
        treeMap = new TreeMap<Integer, Member>();
    }
    // TreeMap에 회원을 추가하는 메서드
    public void addMember(Member member) {
        treeMap.put(member.getMemberId(), member);  // key-value 쌍으로 추가
    }
    // TreeMap에서 회원을 삭제하는 메서드
    public boolean removeMember(int memberId) {
        if (treeMap.containsKey(memberId)) {    // TreeMap에 매개변수로 받은 키 값인 회원 아이디가 있다면
            treeMap.remove(memberId);   // 해당 회원 삭제
            return true;
        }
        System.out.println(memberId + "가 존재하지 않습니다.");
        return false;
    }
    // Iterator를 사용해 전체 회원을 출력하는 메서드
    public void showAllMember() {
        Iterator<Integer> ir = treeMap.keySet().iterator();
        while (ir.hasNext()) {      // 다음 key가 있으면
            int key = ir.next();    // key 값을 가져와서
            Member member = treeMap.get(key);   // key로부터 value 가져오기
            System.out.println(member);
        }
        System.out.println();
    }
}
