// static 초기화 블록 (Static Initialization Block)
import java.time.LocalDate;

class DateOfExecution {
    static String date;

    static {  // static 초기화 블록, 클래스 로딩시 단 한번 실행이 되는 영역
        LocalDate nDate = LocalDate.now();
        date = nDate.toString();
    }
    public static void main(String[] args) {
        System.out.println(date);
    }
}
