// 인터페이스의 또 다른 사용 용도: Marker Interface
interface Upper {}  // 마커 인터페이스
interface Lower {}  // 마커 인터페이스

interface Printable {
    String getContents();
}

class Report implements Printable, Upper {
    String cons;

    Report(String cons) {
        this.cons = cons;
    }
    public String getContents() {
        return cons;
    }
}

class Printer {
    public void printContents(Printable doc) {
        if (doc instanceof Upper) {  // doc 참조 인스턴스가 Upper 구현한다면
            System.out.println((doc.getContents()).toUpperCase());
        }
        else if (doc instanceof Lower) {  // doc 참조 인스턴스가 Lower 구현한다면
            System.out.println((doc.getContents()).toLowerCase());
        }
        else
            System.out.println(doc.getContents());
    }
}

class MarkerInterface {
    public static void main(String[] args) {
        Printer printer = new Printer();
        Report doc = new Report("Simple Funny News~");
        printer.printContents(doc);
    }
}
