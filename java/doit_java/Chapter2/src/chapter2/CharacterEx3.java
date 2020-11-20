// 문자형 연습 3
package chapter2;

public class CharacterEx3 {
    public static void main(String[] args) {

        int a = 65;
        int b = -66;

        char a2 = 65;
    //  char b2 = -66;       // 문자형 변수에 음수를 넣으면 오류가 발생하므로 주석 처리함

        System.out.println((char)a);
        System.out.println((char)b);
        System.out.println(a2);
    }
}

/*

자바는 UTF-16 인코딩을 사용합니다.

유니코드를 표현하는 인코딩 방법은 크게 UTF-8과 UTF-16이 있습니다. 자바의 기본 인코딩 방식은
모든 문자를 2바이트로 표현하는 UTF-16입니다. 그런데 모두 2바이트로 표현하면 1바이트로 표현할
수 있는 알파벳 같은 자료를 저장하는 경우에 메모리가 낭비 될 수 있습니다. 반면에 UTF-8은 각
문자마다 1바이트에서 4바이트까지 사용하여 문자를 나타내는 방식입니다. UTF-16에 비해 메모리
낭비가 적고 전송 속도가 빠릅니다. 이러한 특성으로 UTF-8은 인터넷에서 많이 사용합니다.

 */