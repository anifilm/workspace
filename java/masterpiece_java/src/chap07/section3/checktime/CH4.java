/*
4. 앞의 예제 7-10을 활용하여 예제 7-9에서 작성한 GStack의 모든 요소를 출력하는 printStack 메서드를 작성하라.
 */
package chap07.section3.checktime;

class GStack<T> {  // 제네릭 스택 선언. 제네릭 타입 T
    int top;
    Object[] stack;  // 스택에 요소를 저장할 공간 배열

    public GStack() {
        top = 0;
        stack = new Object[10];
    }
    public void push(T item) {
        if (top == 10)  // 스택이 가득차서 더 이상 요소를 삽입할 수 없다.
            return;
        stack[top] = item;
        top++;
    }
    public T pop() {
        if (top == 0)  // 스택이 비어있어 꺼낼 요소가 없다.
            return null;
        top--;
        return (T)stack[top];  // 타입 매개변수 타입으로 캐스팅
    }
}

public class CH4 {
    public static <T> GStack<T> reverse(GStack<T> a) {
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
    public static <T> void printStack(GStack<T> a) {
        GStack<T> gs = reverse(a);  // 인덱스 순서대로 출력하기위해 스택을 뒤집어 저장
        while (true) {
            T tmp;
            tmp = gs.pop();
            if (tmp == null)
                break;
            else {
                System.out.print(tmp + " ");
                a.push(tmp);  // 스택을 원래 상태로 돌려놓기 위해 다시 역순으로 push
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        GStack<String> stringStack = new GStack<String>();  // String 형의 GStack 생성

        stringStack.push("seoul");
        stringStack.push("busan");
        stringStack.push("LA");

        printStack(stringStack);  // stringStack의 모든 요소를 출력

        GStack<Integer> intStack = new GStack<Integer>();  // Integer 형의 GStack 생성

        intStack.push(1);
        intStack.push(3);
        intStack.push(5);

        printStack(intStack);  // intStack의 모든 요소를 출력
    }
}
