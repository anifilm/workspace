package chap15;

class BoxA4 {
    public String name;

    BoxA4(String name) {
        this.name = name;
    }
}

public class Ex04_BoxArray {
    public static void main(String[] args) {
        BoxA4[] arr = new BoxA4[3];  // [1]

        // [2] 배열에 객체 저장 (초기화)
        arr[0] = new BoxA4("홍길동");
        arr[1] = new BoxA4("전우치");
        arr[2] = new BoxA4("손오공");

        // [3] 저장된 객체의 참조
        System.out.println(arr[0].name);
        System.out.println(arr[1].name);
        System.out.println(arr[2].name);

    }
}
