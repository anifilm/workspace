/*
2. 다음 코드는 오류를 포함하고 있다. 이유를 설명하고 올바르게 수정하라.
  class ConstructorExample {
      int x;

      public void setX(int x) { this.x = x; }
      public int getX() { return x; }
      public ConstructorExample(int x) {
          this.x = x;
      }
      public static void main(String[] args) {
          ConstructorExample a = new ConstructorExample();
          int n = a.getX();
      }
  }

 */
package chap04.section3.checktime;

class ConstructorExample {
    int x;

    public ConstructorExample() { x = 1; }  // 디폴트 생성자 추가
    public ConstructorExample(int x) {
        this.x = x;
    }
    public void setX(int x) { this.x = x; }
    public int getX() { return x; }

    public static void main(String[] args) {
        // 디폴트 생성자가 정의되어 있지 않다. 매개 변수있는 생성자가 정의되어 있기 때문에 디폴트 생성자를 자동생성하지 않음. 사용자 정의 필요
        ConstructorExample a = new ConstructorExample();
        int n = a.getX();
    }
}

public class CH2 {}
