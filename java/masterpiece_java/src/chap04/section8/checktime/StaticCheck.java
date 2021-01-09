/*
4. static 멤버 사용에 있어 아래 소스의 main()에서 문법적으로 틀린 부분을 모두 찾아 고쳐라. 틀린 라인을 수정하거나 삭제 할 수도 있다.
   수정 후 예상되는 출력 결과는 무엇인가?

 */
package chap04.section8.checktime;

public class StaticCheck {
    int s;
    static int t;

    public static void main(String[] args) {
        StaticCheck.t = 10;
    //  StaticCheck.s = 20;  // non-static 멤버 변수이므로 객체 생성 이후 사용 가능

        StaticCheck obj = new StaticCheck();
        obj.s = 30;
        obj.t = 40;
        System.out.println(obj.s);  // 30
        System.out.println(obj.t);  // 40
    }
}
