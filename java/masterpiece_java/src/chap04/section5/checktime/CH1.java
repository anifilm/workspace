/*
1. double 타입의 일차원 배열을 매개변수로 전달받아 배열의 합을 반환하는 getSum() 메서드를 작성하라.

 */
package chap04.section5.checktime;

public class CH1 {
    static double getSum(double arr[]) {
        double sum = 0.0;
        for (int i = 0; i < arr.length; i++)
            sum += arr[i];
        return sum;
    }

    public static void main(String[] args) {
        double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
        System.out.println(getSum(doubleArray));
    }
}
