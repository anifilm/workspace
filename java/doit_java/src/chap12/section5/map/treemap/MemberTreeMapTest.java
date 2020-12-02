// TreeMap 활용하기
package chap12.section5.map.treemap;
import map.Member;

public class MemberTreeMapTest {
    public static void main(String[] args) {

        MemberTreeMap memberTreeMap = new MemberTreeMap();
        // 새로운 회원 인스턴스 생성
        Member memberLim = new Member(1001, "임채영");
        Member memberJung = new Member(1002, "정흥규");
        Member memberSeo = new Member(1003, "서환길");
        Member memberAhn = new Member(1004, "안재훈");
        // HashMap에 회원 추가
        memberTreeMap.addMember(memberLim);
        memberTreeMap.addMember(memberJung);
        memberTreeMap.addMember(memberSeo);
        memberTreeMap.addMember(memberAhn);

        memberTreeMap.showAllMember();

        memberTreeMap.removeMember(1004);   // 회원 아이디(key 값)가 1004인 회원 삭제
        memberTreeMap.showAllMember();
    }
}
