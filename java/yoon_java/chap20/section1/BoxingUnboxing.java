// 래퍼 클래스의 두 가지 기능
class BoxingUnboxing {
    public static void main(String[] args) {
    //  Integer iObj = new Integer(10); // 박싱
    //  Double dObj = new Double(3.14); // 박싱
        Integer iObj = Integer.valueOf(10);
        Double dObj = Double.valueOf(3.14);
        System.out.println(iObj);
        System.out.println(dObj);
        System.out.println();

        int num1 = iObj.intValue(); // 언박싱
        double num2 = dObj.doubleValue(); // 언박싱
        System.out.println(num1);
        System.out.println(num2);
        System.out.println();

        // 래퍼 인스턴스 값을 증가 방법
    //  iObj = new Integer(iObj.intValue() + 10);
    //  dObj = new Double(dObj.doubleValue() + 1.2);
        iObj = Integer.valueOf(iObj.intValue() + 10);
        dObj = Double.valueOf(dObj.doubleValue() + 1.2);
        System.out.println(iObj);
        System.out.println(dObj);
    }
}
