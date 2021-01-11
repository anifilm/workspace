/*
Q9
다음 Stack 인터페이스를 상속받아 문자열을 저장하는 StringStack 클래스를 구현하라.
  (Stack 인터페이스 생략...)

그리고 다음 실행 사례와 같이 동작하도록 StackApp 클래스에 main() 메서드를 작성하라.
  (실행 결과 생략...)

 */
package chap05.excercise;

import java.util.Scanner;

interface Stack {
    int length();    // 현재 스택에 저장된 개수 반환
    int capacity();  // 스택에 전체 저장 가능한 개수 반환
    String pop();    // 스택의 top에 저장된 실수 반환
    boolean push(String val);  // 스택의 top에 실수 저장
}

class StringStack implements Stack {
    private String[] s;
    private int top;
    private int size;

    public StringStack(int size) {
        s = new String[size];
        top = -1;
        this.size = size;
    }
    @Override
    public int length() { return top + 1; }
    @Override
    public int capacity() { return size; }
    @Override
    public String pop() {
        if (top <= -1) {
            return null;
        }
        return s[top--];
    }
    @Override
    public boolean push(String val) {
        if (top+1 < size) {
            s[++top] = val;
            return true;
        }
        return false;
    }
}

public class Q9_StackApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("총 스택 저장 공간의 크기 입력 >> ");
        int size = scanner.nextInt();
        StringStack stringStack = new StringStack(size);

        while (true) {
            System.out.print("문자열 입력 >> ");
            String str = scanner.next();
            if (str.equals("그만")) break;
            if (!stringStack.push(str))
                System.out.println("스택이 꽉 차서 푸시 불가!");
        }

        System.out.print("스택에 저장된 모든 문자열 팝: ");
        int len = stringStack.length();
        for (int i = 0; i < len; i++)
            System.out.print(stringStack.pop() + " ");
        System.out.println();

        scanner.close();
    }
}
