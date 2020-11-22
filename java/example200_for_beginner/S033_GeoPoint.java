// 033 객체를 이용하여 위도 경도 표현하기
public class S033_GeoPoint {
    public static void main(String[] args) {

        // 실수 변수
        double latitude1 = 37.52127220511242;
        double longitude1 = 127.0074462890625;  // 서울
        double latitude2 = 35.137879119634185;
        double longitude2 = 129.04541015625;    // 부산
        // (위도, 경도) 객체
        S033_Geo geo1 = new S033_Geo();
        geo1.latitude = latitude1;
        geo1.longitude = longitude1;

        System.out.println(geo1.latitude + "\t" + geo1.longitude);

        S033_Geo geo2 = new S033_Geo();
        geo2.latitude = latitude2;
        geo2.longitude = longitude2;

        System.out.println(geo2.latitude + "\t" + geo2.longitude);

        // 객체 전달
        S033_Geo geo = geo1;    // shallow copy
        System.out.println(geo.latitude + "\t" + geo.longitude);

        geo1.longitude = 227.0074462890625;
        System.out.println(geo.latitude + "\t" + geo.longitude);
    }
}
