// Number 클래스와 래퍼 클래스의 static 메서드
class NumberMethod {
    public static void main(String[] args) {
    //  Integer iObj = new Integer(29);
        Integer iObj = Integer.valueOf(29);
        System.out.println(iObj.intValue());     // int형 값으로 반환
        System.out.println(iObj.doubleValue());  // double형 값으로 반환

    //  Double dObj = new Double(3.14);
        Double dObj = Double.valueOf(3.14);
        System.out.println(dObj.intValue());     // int형 값으로 반환
        System.out.println(dObj.doubleValue());  // double형 값으로 반환
    }
}
