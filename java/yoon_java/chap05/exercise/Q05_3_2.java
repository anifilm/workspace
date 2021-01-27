/* 문제 05-3 [switch문의 활용]
문제 2
아래의 코드를 if ~ else문이 아닌 switch문을 이용하는 형태로 변경해 보자.
  class NumberRange {
      public static void main(String[] args) {
          int n = 24;

          if (n >= 0 && n < 10)
              System.out.println(" 0 이상 10 미만의 수");
          else if (n >= 10 && n < 20)
              System.out.println("10 이상 20 미만의 수");
          else if (n >= 20 && n < 30)
              System.out.println("20 이상 30 미만의 수");
          else
              System.out.println("음수 혹은 30 이상의");
      }
  }

 */
class Q05_3_2 {
    public static void main(String[] args) {
        int n = 24;

        switch (n / 10) {
            case 0:
                System.out.println(" 0 이상 10 미만의 수");
                break;
            case 1:
                System.out.println("10 이상 20 미만의 수");
                break;
            case 2:
                System.out.println("20 이상 30 미만의 수");
                break;
            default:
                System.out.println("음수 혹은 30 이상의");
        }
    }
}
