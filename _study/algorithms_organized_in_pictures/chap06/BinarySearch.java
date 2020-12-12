import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {

        int[] dataArray = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        System.out.println("검색할 데이터를 입력하세요");
        Scanner scan = new Scanner(System.in);
        int search = Integer.parseInt(scan.nextLine().trim()); // 데이터를 입력받습니다.

        binarySearch(dataArray, search); // 이진 검색 모듈의 수행
        return;
    }

    public static void binarySearch(int arr[], int iKey) {
        int mid;
        int left = 0;
        int right = arr.length - 1;

        while (right >= left) {
            mid = (right + left) / 2;
            if (iKey == arr[mid]) {
                System.out.println(iKey + " is in the array	with index value: " + mid);
                break;
            }
            if (iKey < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }
}
