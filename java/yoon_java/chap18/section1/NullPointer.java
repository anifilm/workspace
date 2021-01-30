// 예외 상황을 알리기 위해 정의된 클래스의 종류
class NullPointer {
    public static void main(String[] args) {
        String str = null;
        System.out.println(str);  // null 출력
        int len = str.length();   // Exception!
    }
}
