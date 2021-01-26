// 관계 연산자: <, >, <=, >=, ==, !=
class RelationalOp {
    public static void main(String[] args) {
        System.out.println("3 >= 2 : " + (3 >= 2));
        System.out.println("3 <= 2 : " + (3 <= 2));
        System.out.println("7.0 == 7 : " + (7.0 == 7));  // 자동 형 변환이 일어남 -> 7.0 == 7.0
        System.out.println("7.0 != 7 : " + (7.0 != 7));  // 자동 형 변환이 일어남 -> 7.0 != 7.0
    }
}
