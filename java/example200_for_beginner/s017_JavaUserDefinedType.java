// 사용자 정의 참조 타입 사용하기

// 사용자 정의 클래스
class JLocation {
    public double lat;
    public double lng;
}

public class s017_JavaUserDefinedType {

    public static void main(String[] args) {

        // 두개의 기본 타입
        double latitude = 37.52127220511242;
        double longgitude = 127.0074462890625;

        // 사용자 정의 객체를 생성
        JLocation jloc = new JLocation();
        jloc.lat = latitude;    // 값을 대입
        jloc.lng = longgitude;  // 값을 대입

        System.out.println(jloc.lat);
        System.out.println(jloc.lng);

        JLocation newLoc = jloc;    // 객체를 대입

        System.out.println(newLoc.lat);
        System.out.println(newLoc.lng);
    }
}
