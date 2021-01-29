// 배열을 대상으로 한 값의 저장과 참조
class Box {
    private String conts;

    Box(String cont) {
        this.conts = cont;
    }
    public String toString() {
        return conts;
    }
}

class BoxArray {
    public static void main(String[] args) {
        Box[] arr = new Box[3];

        // 배열에 인스턴스 저장
        arr[0] = new Box("First");
        arr[1] = new Box("Second");
        arr[2] = new Box("Third");

        // 저장된 인스턴스의 참조
        System.out.println(arr[0]);
        System.out.println(arr[1]);
        System.out.println(arr[2]);
    }
}
