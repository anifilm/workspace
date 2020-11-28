// HashSet 활용하기
package collection.hashset2;

public class MemberHashSetTest {
    public static void main(String[] args) {

        MemberHashSet memberHashSet = new MemberHashSet();
        // 새로운 회원 인스턴스 생성
        Member memberLim = new Member(1001, "임채영");
        Member memberJung = new Member(1002, "정흥규");
        Member memberSeo = new Member(1003, "서환길");
        Member memberAhn = new Member(1004, "안재훈");
        // HashSet에 회원 추가
        memberHashSet.addMember(memberLim);
        memberHashSet.addMember(memberJung);
        memberHashSet.addMember(memberSeo);
        memberHashSet.addMember(memberAhn);

        memberHashSet.showAllMember();    // 전체 회원 출력

        // 안재훈 회원 삭제
        memberHashSet.removeMember(memberAhn.getMemberId());
        // 안재훈 회원을 삭제한 후 다시 전체 회원 출력
        memberHashSet.showAllMember();

        // Member 클래스에서 hashCode(), equals() 메서드를 재정의하여 아이디 중복을 허용하지 않음
        Member memberMoon = new Member(1003, "문영수");
        memberHashSet.addMember(memberMoon);
        memberHashSet.showAllMember();
    }
}
