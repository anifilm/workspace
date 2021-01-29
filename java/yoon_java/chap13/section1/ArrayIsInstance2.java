// 1차원 배열의 생성 방법, 인스턴스를 저장할 수 있는 배열의 생성
class Box {
    private String conts;

    Box(String cont) {
        this.conts = cont;
    }
    public String toString() {
        return conts;
    }
}

class ArrayIsInstance2 {
    public static void main(String[] args) {
        Box[] arr = new Box[5];  // 길이가 5인 Box형 1차원 배열의 생성
        System.out.println("length: " + arr.length);  // length: 5
    }
}
