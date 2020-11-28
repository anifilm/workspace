/*
나 혼자 코딩!
ArrayList의 특정 위치에 회원 추가하기
회원을 추가할 때 맨 뒤가 아닌 특정 위치에 추가하는 메서드를 만들고, MemberArrayList
클래스에 코드를 추가하여 테스트해 봅니다.
힌트 public void insertMember(Member member, int index) 같은 메서드를 Member
ArrayList에 구현해 보세요. 매개변수로 전달된 index 위치에 회원을 추가하고 전체 회원을
출력하여 확인해 봅니다.
 */
package standalone.arraylist;
import java.util.ArrayList;

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
    // 해당 인덱스 위치에 회원을 ArrayList에 추가함
    public void insertMember(Member member, int index) {
        if (index < 0 || index > arrayList.size() + 1) {
            System.out.println("지정된 위치에 회원 정보를 추가할 수 없습니다.");
            return;
        }
        arrayList.add(index, member);
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
