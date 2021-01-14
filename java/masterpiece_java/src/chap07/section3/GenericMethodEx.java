// 스택의 내용을 반대로 만드를 제네릭 메서드 만들기
package chap07.section3;

public class GenericMethodEx {
    public static <T> GStack<T> reverse(GStack<T> a) {  // T사 타입 매개변수인 제네릭 메서드
        GStack<T> s = new GStack<T>();  // 스택 a를 반대로 저장할 목적 GStack 생성
        while (true) {
            T tmp;
            tmp = a.pop();  // 원래 스택에서 요소 하나를 꺼냄
            if (tmp == null)  // 스택이 비었다면
                break;  // 작업 종료
            else
                s.push(tmp);  // 새 스택에 요소를 삽입
        }
        return s;
    }

    public static void main(String[] args) {
        GStack<Double> gs = new GStack<Double>();  // Double 형의 GStack 생성

        for (int i = 0; i < 5; i++)  // 5의 요소를 스택에 push
            gs.push(new Double(i));

        gs = reverse(gs);

        for (int i = 0; i < 5; i++)
            System.out.println(gs.pop());;
    }
}
