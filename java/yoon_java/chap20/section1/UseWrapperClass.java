// 기본 자료형의 값을 감싸는 래퍼 클래스
class UseWrapperClass {
    public static void showData(Object obj) {
        System.out.println(obj);
    }

    public static void main(String[] args) {
    //  Integer iObj = new Integer(3);  // 정수 3을 감싸는 래퍼 인스턴스 생성
    //  showData(iObj);
    //  showData(new Double(7.15));  // 7.15를 감싸는 래퍼 인스턴스 생성 및 전달

        Integer iObj = Integer.valueOf(3);
        showData(iObj);
        showData(Double.valueOf(7.15));
    }
}
