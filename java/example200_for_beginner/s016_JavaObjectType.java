// 016 API에서 제공하는 참조 타입 사용하기
import java.util.Arrays;
import java.util.Calendar;
import java.util.Date;

public class S016_JavaObjectType {
    public static void main(String[] args) {

        // 기본 타입의 배열은 참조 타입
        int[] m = {1, 2, 3};
        int[] n = new int[] {4, 5, 6};

        // Arrays를 활용하여 배열 출력
        System.out.println(Arrays.toString(m));
        System.out.println(Arrays.toString(n));

        // 참조 타입 - 객체 타입
        String card = "H8";
        Date d = new Date();
        Calendar cal = Calendar.getInstance();

        // 자동으로 toString()이 붙는다.
        System.out.println(card);   // card.toString()
        System.out.println(d);      // d.toString()
        System.out.println(cal);    // cal.toString()
    }
}
