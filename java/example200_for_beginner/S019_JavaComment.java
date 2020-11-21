// 019 코멘트(주석) 달기 (코멘트 - 프로그래밍에 영향이 없으며 설명을 위한 표시)
public class S019_JavaComment {
    public static void main(String[] args) {
        /*
        0.0 <= 실수값 < 10.0을 (int)하면 정수만 반환한다.
        그래서 0 ~ 9 사이의 임의의 정수를 반봔한다.
         */
        int makeOne = (int)(Math.random() * 10);
        // 0 ~ 9 사이의 임의의 정수
        System.out.println(makeOne);    // 실행할 때마다 변한다.
    }
}
