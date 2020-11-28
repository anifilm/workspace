// Comparator 인터페이스 구현하기
package collection.treeset2;
import java.util.Comparator;

public class Member implements Comparator<Member> {
    private int memberId;       // 회원 아이디
    private String memberName;  // 회원 이름

    public Member(int memberId, String memberName) {
        this.memberId = memberId;
        this.memberName = memberName;
    }

    public int getMemberId() {
        return memberId;
    }

    public void setMemberId(int memberId) {
        this.memberId = memberId;
    }

    public String getMemberName() {
        return memberName;
    }

    public void setMemberName(String memberName) {
        this.memberName = memberName;
    }
    // toString() 메서드 재정의
    @Override
    public String toString() {
        return memberName + " 회원님의 아이디는 " + memberId + " 입니다.";
    }

    @Override
    public int hashCode() {
        return memberId;    // hashCode() 메서드가 회원 아이디를 반환하도록 재정의
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Member) {
            Member member = (Member)obj;
            // 매개변수로 받은 회원 아이디가 자신의 회원 아이디와 같다면 true 반환
            if (this.memberId == member.memberId)
                return true;
            else
                return false;
        }
        return false;
    }
    // compare() 메서드 재정의, 전달받은 두 매개변수를 비교함
    @Override
    public int compare(Member mem1, Member mem2) {
        return mem1.getMemberId() - mem2.getMemberId();
    }
}
