// 오토 박싱(Auto Boxing) & 오토 언박싱(Auto Unboxing)
class AutoBoxingUnboxing {
    public static void main(String[] args) {
        Integer iObj = 10;   // 오토 박싱
        Double dObj = 3.14;  // 오토 박싱
        System.out.println(iObj);
        System.out.println(dObj);
        System.out.println();

        int num1 = iObj;     // 오토 언박싱
        double num2 = dObj;  // 오토 언박싱
        System.out.println(num1);
        System.out.println(num2);
    }
}
