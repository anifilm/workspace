// 인터페이스 대상의 instanceof 연산
interface Printable {
    void printLine(String str);
}

class SimplePrinter implements Printable {  // Printable을 직접 구현함
    public void printLine(String str) {
        System.out.println(str);
    }
}

class MultiPrinter extends SimplePrinter {  // Printable을 간접 구현함
    public void printLine(String str) {
        super.printLine("start of multi...");
        super.printLine(str);
        super.printLine("end of multi");
    }
}

class InstanceofInterface {
    public static void main(String[] args) {
        Printable printer1 = new SimplePrinter();
        Printable printer2 = new MultiPrinter();

        if (printer1 instanceof Printable)
            printer1.printLine("This is a simple printer.");
        System.out.println();

        if (printer2 instanceof Printable)
            printer2.printLine("This is a multiful printer.");
        System.out.println();
    }
}
