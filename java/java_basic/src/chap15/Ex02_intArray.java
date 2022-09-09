package chap15;

public class Ex02_intArray {
    public static void main(String[] args) {
        // 길이가 3인 int형 1차원 배열의 생성
        int[] arr = new int[3];  // [1]

        arr[0] = 100; // [2] 값의 저장: 첫 번째 요소
        arr[1] = 90;  // 값의 저장: 두 번째 요소
        arr[2] = 80;  // 값의 저장: 세 번째 요소

        int sum = arr[0] + arr[1] + arr[2];  // [3] 값의 참조
        System.out.println("총점: " + sum);
    }
}
