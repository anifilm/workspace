// 인스턴스 배열을 대상으로 하는 enhanced for문
class Box {
    private String contents;
    private int boxNum;

    Box(int num, String cont) {
        boxNum = num;
        contents = cont;
    }
    public int getBoxNum() {
        return boxNum;
    }
    public String toString() {
        return contents;
    }
}

class EnhancedForInst {
    public static void main(String[] args) {
        Box[] arr = new Box[5];
        arr[0] = new Box(101, "Coffee");
        arr[1] = new Box(202, "Computer");
        arr[2] = new Box(303, "Apple");
        arr[3] = new Box(404, "Dress");
        arr[4] = new Box(505, "Fairy-tail book");

        // 배열에서 번호가 505인 Box를 찾아 그 내용뮬을 출력하는 반복문
        for (Box e : arr) {
            if (e.getBoxNum()  == 505)
                System.out.println(e);
        }
    }
}
