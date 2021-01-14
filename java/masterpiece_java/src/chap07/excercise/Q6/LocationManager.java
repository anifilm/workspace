package chap07.excercise.Q6;
import java.util.*;

public class LocationManager {
    private Scanner scanner;
    private HashMap<String, Location> cityLoc;

    public LocationManager() {
        scanner = new Scanner(System.in);
        cityLoc = new HashMap<>();
    }
    public void read() {
        System.out.println("도시, 경도, 위도를 입력하세요. (콤마','로 구분)");
        for (int i = 0; i < 4; i++) {
            System.out.print(">> ");
            String input = scanner.nextLine();
            StringTokenizer st = new StringTokenizer(input, ",");
            String name = st.nextToken().trim();
            int latitude = Integer.parseInt(st.nextToken().trim());
            int longitude = Integer.parseInt(st.nextToken().trim());

            Location city = new Location(name, latitude, longitude);
            cityLoc.put(name, city);  // HashMap에 저장
        }
    }
    public void printAll() {
        Set<String> key = cityLoc.keySet();
        Iterator<String> it = key.iterator();
        System.out.println("---------------------------");
        while (it.hasNext()) {
            String name = it.next();  // 도시 이름 알아냄
            Location city = cityLoc.get(name);  // 도시 이름을 key로하여 HashMap으로 Location 객체 얻어냄
            System.out.printf("%-5s\t", city.getCity());
            System.out.printf("%5d\t", city.getLatitude());
            System.out.printf("%5d\n", city.getLongitude());
        }
        System.out.println("---------------------------");
    }
    public void processQuery() {
        while (true) {
            System.out.print("도시 이름 >> ");
            String name = scanner.nextLine();  // 도시 이름 입력
            if (name.equals("그만")) {
                System.out.println("프로그램을 종료합니다.");
                scanner.close();
                return;
            }
            Location city = cityLoc.get(name);  // HashMap서 이름을 key로 검색
            if(city == null) { // 이름이 HashMap에 없다면
                System.out.println(name + "는 없습니다.");
            }
            else {  // HashMap에서 검색된 Location 객체
                System.out.printf("%-5s\t", city.getCity());
                System.out.printf("%5d\t", city.getLatitude());
                System.out.printf("%5d\n", city.getLongitude());
            }
        }
    }
    public void run() {
        read();
        printAll();
        processQuery();
    }

    public static void main(String[] args) {
        LocationManager city = new LocationManager();
        city.run();
    }
}
