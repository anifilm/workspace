/*
나 혼자 코딩!
성적에 따라 학점 부여하기
앞에서 입력한 예제 코드를 바탕으로 성적에 따라 학점을 부여하는 프로그램을 만들어 보세요.
100~90점은 A, 89~90점은 B, 79~70점은 C, 69~60점은 D, 나머지는 F입니다.
int형 변수 score와 char형 변수 grade를 사용하여 score에 따른 grade를 출력해 보세요.
 */
package chap04.standalone;

public class IfExample3_Grade {
    public static void main(String[] args) {

        int score = 92;
        char grade;

        if (100 >= score && score >= 90)
            grade = 'A';
        else if (89 >= score && score >= 80)
            grade = 'B';
        else if (79 >= score && score >= 70)
            grade = 'C';
        else if (69 >= score && score >= 60)
            grade = 'D';
        else
            grade = 'F';

        System.out.println("성적에 따른 학점은 " + grade + " 입니다.");
    }
}
