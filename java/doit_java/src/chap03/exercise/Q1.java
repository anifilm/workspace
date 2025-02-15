/*
Q1
다음 소스 코드의 빈칸을 채워 보세요.
*/
package chap03.exercise;

public class Q1 {
    public static void main(String[] args) {

        int myAge = 23;
        int teacherAge = 38;

        boolean value = (myAge > 25);               // false
        System.out.println(value);

        System.out.println(myAge <= 25);            // true
        System.out.println(myAge == teacherAge);    // false

        char ch;
        ch = (myAge > teacherAge) ? 'T' : 'F';      // F

        System.out.println(ch);
    }
}
