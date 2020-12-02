// 입력 문자에 따라 배분 정책 수행하기
package chap10.section2.scheduler;
import java.io.IOException;

public class SchedulerTest {
    public static void main(String[] args) throws IOException {

        System.out.println("전화 상담 할당 방식을 선택하세요.");
        System.out.println("R: 한명씩 차례로 할당");
        System.out.println("L: 쉬고 있거나 대기가 가장 적은 상담원에게 할당");
        System.out.println("P: 우선순위가 높은 고객 먼저 할당");

        int ch = System.in.read();  // 할당 방식을 입력받아 ch 변수에 대입
        Scheduler scheduler = null;

        if (ch == 'R' || ch == 'r') {
            scheduler = new RoundRobin();
        }
        else if (ch == 'L' || ch == 'l') {
            scheduler = new LeastJob();
        }
        else if (ch == 'P' || ch == 'p') {
            scheduler = new PriorityAllocation();
        }
        else {
            System.out.println("지원되지 않는 기능입니다.");
            return;
        }
        // 어떤 정책인가와 상관없이 인터페이스에 선언한 메서드 호출
        scheduler.getNextCall();
        scheduler.sendCallToAgent();
    }
}
