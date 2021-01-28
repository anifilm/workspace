// static import 선언
import static java.lang.Math.*;

class StaticImport {
    public static void main(String[] args) {
        System.out.println(E);
        System.out.println(PI);

        System.out.println(abs(-55));  // 절대값 반환
        System.out.println(max(77, 88));  // 큰 값 반환
        System.out.println(min(33, 55));  // 작은 값 반환
    }
}

/*

import를 통한 라이브러리 사용시 Math.PI와 같이 static 멤버의 이름을 붙여야하지만
static import 으로 선언하게 되면 Math.을 생략하고 PI로 클래스 메서드를 호출할 수 있다.

 */
