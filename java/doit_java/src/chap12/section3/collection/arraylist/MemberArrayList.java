// ArrayList 활용하기
package chap12.section3.collection.arraylist;
import java.util.ArrayList;
import chap12.section2.collection.Member;

public class MemberArrayList {
    private ArrayList<Member> arrayList;    // ArrayList 선언

    public MemberArrayList() {
        // Member형으로 선언한 ArrayList 생성
        arrayList = new ArrayList<Member>();
    }
    // ArrayList에 회원을 추가하는 메서드
    public void addMember(Member member) {
        arrayList.add(member);
    }
    // 해당 아이디를 가진 회원을 ArrayList에서 찾아 제거함
    public boolean removeMember(int memberId) {
        for (int i = 0; i < arrayList.size(); i++) {
            // get() 메서드로 회원을 순차적으로 가져옴
            Member member = arrayList.get(i);
            int tempId = member.getMemberId();
            if (tempId == memberId) {   // 회원 아이디가 매개변수와 일치하면
                arrayList.remove(i);    // 해당 회원을 삭제
                return true;
            }
        }
        // 반복문이 끝날 때까지 해당 아이디를 찾지 못한 경우
        System.out.println(memberId + "가 존재하지 않습니다.");
        return false;
    }
    // 전체 회원을 출력하는 메서드
    public void showAllMember() {
        for (Member member : arrayList) {
            System.out.println(member);
        }
        System.out.println();
    }
}
