/*
Q12
다음과 같이 동작하는 Add.java를 작성하라. 명령행 인자 중에서 정수 만을 골라 합을 구하라. 다음 화면은 Add.class 파일을 c:\Temp 디렉터리에
복사한 뒤 실행한 경우이다. 원본 Add.class 파일은 이클립스 프로젝트 폴더 밑에 bin 폴더에 있다.
  (실행 결과 생략...)

 */
package chap03.excercise;

public class Q12_Add {
    public static void main(String[] args) {
        int sum = 0, n = 0;

        for (int i = 0; i < args.length; i++) {
            try {
                n = Integer.parseInt(args[i]);
            }
            catch (NumberFormatException e) {
                continue;
            }
            sum += n;
        }
        System.out.println("sum = " + sum);
    }
}
