/*
1. 다음 코드에서 잘못된 부분이 3군데 있다. 모두 수정하라.
  public class Samp {
      int id;

      public void Samp(int x) {
          this.id = x;
      }
      public void Samp() {
          System.out.println("생성자 호출");
          this(0);
      }
  }

 */
package chap04.section3.checktime;

class Samp {
    int id;
    // (1) 생성자에 void 제거
    public Samp() {
        this(0);  // (3) this는 생성자의 첫번째 문자이어야 한다.
        System.out.println("생성자 호출");
    }
    // (2) 생성자에 void 제거
    public Samp(int x) {
        this.id = x;
    }
}

public class CH1 {}
