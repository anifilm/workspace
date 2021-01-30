// 예외 상황을 알리기 위해 정의된 클래스의 종류
class Board {}
class PBoard extends Board {}

class ClassCast {
    public static void main(String[] args) {
        Board pbd1 = new PBoard();
        PBoard pbd2 = (PBoard)pbd1;  // OK!

        System.out.println(".. intermediate location ..");
        Board ebd1 = new Board();
        PBoard ebd2 = (PBoard)ebd1;  // Exception!
    }
}
