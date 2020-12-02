/*
Q5
반복문과 조건물을 사용하여 다음 모양을 출력하는 프로그램을 만들어 보세요.

          *
        * * *
      * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
 */
package chap04.exercise;

public class Q5 {
    public static void main(String args[]) {

        int lineCount = 7;
        int spaceCount = lineCount / 2 + 1;
        int starCount = 1;

        for (int i = 0; i < lineCount ; i++) {
            for (int j = 0; j < spaceCount; j++)
                System.out.print("  ");
            for (int j = 0; j < starCount; j++)
                System.out.print(" *");
            for (int j = 0; j < spaceCount; j++)
                System.out.print("  ");
            if (i < lineCount / 2) {
                starCount += 2;
                spaceCount -= 1;
            } else {
                starCount -= 2;
                spaceCount += 1;
            }
            System.out.println();
        }
    }
}
