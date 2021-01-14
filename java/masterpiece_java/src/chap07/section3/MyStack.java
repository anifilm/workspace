// 제네릭 스택 만들기
package chap07.section3;

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

public class MyStack {
    public static void main(String[] args) {
        GStack<String> stringStack = new GStack<String>();  // String 형의 GStack 생성

        stringStack.push("seoul");
        stringStack.push("busan");
        stringStack.push("LA");

        for (int n = 0; n < 3; n++)
            System.out.println(stringStack.pop());  // stringStack 스택에 있는 3개의 문자열 팝

        GStack<Integer> intStack = new GStack<Integer>();  // Integer 형의 GStack 생성

        intStack.push(1);
        intStack.push(3);
        intStack.push(5);

        for (int n = 0; n < 3; n++)
            System.out.println(intStack.pop());  // intStack 스택에 있는 3개의 정수 팝
    }
}
