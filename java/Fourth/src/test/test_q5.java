/*
Q5 반복문과 조건물을 사용하여 다음 모양을 출력하는 프로그램을 만들어 보세요.

          *
        * * *
      * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/
package test;

public class test_q5 {

    public static void main(String args[]) {

        int lineCount = 7;
        int spaceCount = lineCount / 2 + 1;
        int starCount = 1;

        for (int i = 0; i < lineCount ; i++) {
          
            for (int j = 0; j < spaceCount; j++) {
                System.out.print(' ');
                System.out.print(' ');
            }

            for (int j = 0; j < starCount; j++) {
                System.out.print(' ');
                System.out.print('*');
            }

            for (int j = 0; j < spaceCount; j++) {
                System.out.print(' ');
                System.out.print(' ');
            }

            if (i < lineCount / 2) {
                spaceCount -= 1;
                starCount += 2;
            } else {
                spaceCount += 1;
                starCount -= 2;
            }

            System.out.println( );
        }
    }
}