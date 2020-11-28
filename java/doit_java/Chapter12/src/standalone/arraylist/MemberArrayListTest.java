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
    //  memberArrayList.addMember(memberSeo);
        memberArrayList.addMember(memberAhn);

        memberArrayList.showAllMember();    // 전체 회원 출력

        // ArrayList 인덱스 2에 서환길 회원 추가
        memberArrayList.insertMember(memberSeo, 2);
        // 서환길 회원을 추가한 후 다시 전체 회원 출력
        memberArrayList.showAllMember();
    }
}
