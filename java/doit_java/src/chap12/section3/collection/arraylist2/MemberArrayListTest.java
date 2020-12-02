// ArrayList 활용하기
package chap12.section3.collection.arraylist2;

public class MemberArrayListTest {
    public static void main(String[] args) {

        MemberArrayList memberArrayList = new MemberArrayList();
        // 새로운 회원 인스턴스 생성
        Member memberLim = new Member(1001, "임채영");
        Member memberJung = new Member(1002, "정흥규");
        Member memberSeo = new Member(1003, "서환길");
        Member memberAhn = new Member(1004, "안재훈");
        // ArrayList에 회원 추가
        memberArrayList.addMember(memberLim);
        memberArrayList.addMember(memberJung);
        memberArrayList.addMember(memberSeo);
        memberArrayList.addMember(memberAhn);

        memberArrayList.showAllMember();    // 전체 회원 출력

        // 안재훈 회원 삭제
        memberArrayList.removeMember(memberAhn.getMemberId());
        // 안재훈 회원을 삭제한 후 다시 전체 회원 출력
        memberArrayList.showAllMember();
    }
}
