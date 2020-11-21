// 018 문자열을 실수로 변환하기 (타입 변환의 필요성)
public class S018_JavaTypeConversion {
    public static void main(String[] args) {

        String slat = "37.52127220511242";
        // String slat = "hello";
        // 공백 제거 후 double로 타입 변환
        double latitude = Double.parseDouble(slat.trim());
        System.out.println(latitude);
    }
}
