class Student {
    public String studentName;
    public int grade;
    public int money;

    public Student(String studentName, int money) {
        this.studentName = studentName;
        this.money = money;
    }

    public void takeBus(Bus bus) {
        bus.take(1000);
        this.money -= 1000;
    }

    public void takeSubway(Subway subway) {
        subway.take(1500);
        this.money -= 1500;
    }

    public void showInfo() {
        System.out.println(studentName + " 님의 남은 돈은 " + money + "원 입니다.");
    }
}

class Bus {
    int busNumber;
    int passengerCount;
    int money;

    public Bus(int busNumber) {
        this.busNumber = busNumber;
    }

    public void take(int money) {
        this.money += money;
        passengerCount++;
    }

    public void showInfo() {
        System.out.println("버스 " + busNumber + " 번의 승객은 " + passengerCount + " 명이고, 수입은 " + money + "원 입니다.");
    }
}

class Subway {
    String lineNumber;
    int passengerCount;
    int money;

    public Subway(String lineNumber) {
        this.lineNumber = lineNumber;
    }

    public void take(int money) {
        this.money += money;
        passengerCount++;
    }

    public void showInfo() {
        System.out.println(lineNumber + " 의 승객은 " + passengerCount + " 명이고, 수입은 " + money + "원 입니다.");
    }
}

class TakeTrans {
    public static void main(String[] args) {

        Student studentLim = new Student("임채영", 10000);

        Bus bus120 = new Bus(120);
        studentLim.takeBus(bus120);

        studentLim.showInfo();
        bus120.showInfo();

        Student studentJung = new Student("정흥규", 10000);

        Subway subwayGreen = new Subway("2호선");
        studentJung.takeSubway(subwayGreen);

        studentJung.showInfo();
        subwayGreen.showInfo();
    }
}