package cooperation;

public class TakeTrans {

    public static void main(String[] args) {

        Student studentJames = new Student("임채영", 5000);         // 학생 두명 생성
        Student studentTomas = new Student("정흥규", 10000);
        Student studentEdward = new Student("서환길", 30000);       // 택시 타는 과정을 추가로 구현하기 (나 혼자 코딩!)

        Bus bus100 = new Bus(100);                                  // 노선번호가 100번인 버스 생성
        studentJames.takeBus(bus100);                               // 임채영이 100번 버스를 탐
        studentJames.showInfo();                                    // 임채영의 정보 출력
        bus100.showInfo();                                          // 버스 정보 출력

        Subway subwayGreen = new Subway("2호선");                   // 노선번호가 2호선인 지하철 생성
        studentTomas.takeSubway(subwayGreen);                       // 정흥규가 2호선을 탐
        studentTomas.showInfo();                                    // 정흥규 정보 출력
        subwayGreen.showInfo();                                     // 지하철 정보 출력

        Taxi taxi4567 = new Taxi(4567);                             // 차량번호가 4567번인 택시 생성
        studentEdward.takeTaxi(taxi4567);                           // 서환길이 4567번 택시를 탐
        studentEdward.showInfo();                                   // 서환길 정보 출력
        taxi4567.showInfo();                                        // 택시 정보 출력
    }
}