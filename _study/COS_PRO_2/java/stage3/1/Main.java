import java.util.*;

class Main {
    int func_a(int[] scores, int score){
        int length = scores.length;
        for(int rank = 0; rank < length; rank++)
            if(scores[rank] == score)
                return rank + 1;
        return 0;
    }

    void func_b(int[] arr){
        Arrays.sort(arr);
        int length = arr.length;
        int temp = 0;
        for(int i = 0; i < length / 2; i++){
            temp = arr[i];
            arr[i] = arr[(length - 1) - i];
            arr[(length - 1) - i] = temp;
        }
    }

    int func_c(int[] arr, int n){
        return arr[n];
    }

    public int solution(int[] scores, int n) {
        int score = func_c(scores, n);
        func_b(scores);
        int answer = func_a(scores, score);
        return answer;
    }

    // 아래는 테스트케이스 출력을 해보기 위한 main 메소드입니다.
    public static void main(String[] args) {
        Main sol = new Main();
        int[] scores = {20, 60, 98, 59};
        int n = 3;
        int ret = sol.solution(scores, n);

        // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
        System.out.println("solution 메소드의 반환 값은 " + ret + " 입니다.");
    }
}
