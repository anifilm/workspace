// 배열 선언하고 초기화하기 내용 정리
package chap07.section1.array;

public class ArrayInitTest {
    public static void main(String[] args) {

        // 배열 변수 선언 (크기를 지정)
        int[] testarray = new int[10];      // 길이는 10, 요소를 0으로 자동 초기화
        int testarray2[] = new int[10];

        // 선언후 배열 요소를 할당
        testarray[0] = 101;
        testarray[1] = 102;
        testarray[2] = 103;
        testarray[3] = 104;

        // testarray2의 길이를 10으로 지정하였으나
        testarray2 = new int[] {101, 102, 103, 104}; // new int[] 초기화시 요소수로 자동 변경됨

        // 배열 변수 선언과 동시 초기화 (크기는 입력 내용을 기반으로 자동지정됨)
        int[] studentId = new int[] {101, 102, 103};
    //  int[] studentId2 = new int[3] {101, 102, 103}; // 오류 발생
        int[] studentId3 = {101, 102, 103};   // new int[] 를 생략할 수 있다

        // 배열 변수 선언과 초기화
        int[] studentId4;
        studentId4 = new int[] {101, 102, 103};    // 변수 선언 이후 초기화시에는 new int[] 를 생략할 수 없다

        System.out.println(testarray2.length);
        for (int i = 0; i < testarray2.length; i++)
            System.out.println(testarray2[i]);
    }
}
