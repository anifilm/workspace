package chap21;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;

public class Ex11_ConvertExt {
    public static void main(String[] args) {
        List<String> fixedSizeList = Arrays.asList("홍길동", "전우치", "전우치", "손오공");  // [1]
        ArrayList<String> list = new ArrayList<>(fixedSizeList);  // [2]

        for (String s : list) {
            System.out.print(s.toString() + '\t');
        }
        System.out.println();

        // 중복 제거
        HashSet<String> set = new HashSet<>(list);  // [3]
        // [4] 다시 list로 변환
        list = new ArrayList<>(set);

        for (String s : list) {  // [5]
            System.out.print(s.toString() + '\t');
        }
        System.out.println();
    }
}
