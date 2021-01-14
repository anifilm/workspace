/*
Q2
Scanner 클래스를 사용하여 6개 학점('A','B','C','D','F')을 문자로 입력받아 ArrayList에 저장하고, ArrayList를 검색하여 학점을
점수(A=4.0, b=3.0, c=2.0, d=1.0, f=0)로 변환하여 평균을 출력하는 프로그램을 작성하라.

 */
package chap07.excercise;
import java.util.*;

public class Q2 {
    public static void main(String[] args) {
        ArrayList<Character> grade = new ArrayList<>();

        System.out.print("6개 학점을 빈 칸으로 분리하여 입력(A/B/C/D/F) >> ");
        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 6; i++) {
            char g_input = scanner.next().charAt(0);
            if ((g_input == 'A' || g_input == 'B' || g_input == 'C' || g_input == 'D' || g_input == 'F') ||
                (g_input == 'a' || g_input == 'b' || g_input == 'c' || g_input == 'd' || g_input == 'f'))
                grade.add(g_input);
            else {
                System.out.println("잘못 입력하였습니다. 다시 입력하여 주십시오");
                i = 0;
            }
        }

        double sum = 0.0;
        for (int i = 0; i < grade.size(); i++) {
            switch (grade.get(i)) {
                case 'A': case 'a':
                    sum += 4.0;
                    break;
                case 'B': case 'b':
                    sum += 3.0;
                    break;
                case 'C': case 'c':
                    sum += 2.0;
                    break;
                case 'D': case 'd':
                    sum += 1.0;
                    break;
                case 'F': case 'f':
                    sum += 0.0;
                    break;
            }
        }
        System.out.println(sum/6);

        scanner.close();
    }
}

