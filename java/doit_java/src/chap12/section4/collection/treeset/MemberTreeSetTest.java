// TreeSet 활용하기
package chap12.section4.collection.treeset;

public class MemberTreeSetTest {
    public static void main(String[] args) {

        MemberTreeSet memberTreeSet = new MemberTreeSet();
        // 새로운 회원 인스턴스 생성
        Member memberLim = new Member(1001, "임채영");
        Member memberJung = new Member(1002, "정흥규");
        Member memberSeo = new Member(1003, "서환길");
        Member memberAhn = new Member(1004, "안재훈");
        // TreeSet에 회원 추가
        memberTreeSet.addMember(memberLim);
        memberTreeSet.addMember(memberJung);
        memberTreeSet.addMember(memberSeo);
        memberTreeSet.addMember(memberAhn);

        memberTreeSet.showAllMember();    // 전체 회원 출력

        // 안재훈 회원 삭제
        memberTreeSet.removeMember(memberAhn.getMemberId());
        // 안재훈 회원을 삭제한 후 다시 전체 회원 출력
        memberTreeSet.showAllMember();

        // Member 클래스에서 hashCode(), equals() 메서드를 재정의하여 아이디 중복을 허용하지 않음
        Member memberMoon = new Member(1003, "문영수");
        memberTreeSet.addMember(memberMoon);
        memberTreeSet.showAllMember();
    }
}
