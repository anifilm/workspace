/*
나 혼자 코딩!
상담 전화 배분 정책 추가하기
상담 전화를 할당하는 방식이 아닌 상담원이 본인이 필요할 때 가져오는 정책을 추가해 봅니다.
AgentGetCall 클래스를 추가로 만듭니다. 추가된 정책에서 getNextCall()이 호출되면
'상담원이 다음 전화 요청'이라고 출력합니다. sendCallToAgent()가 호출되면 '상담원이
전화 상담을 가져 갔습니다.'라고 출력합니다. 추가된 정책은 SchedulaerTest가 실행될 때
A 또는 a를 입력하면 선택됩니다. AgentGetCall 클래스가 Schedular 인터페이스를 구현하고,
이를 SchedulerTest에서 생성하여 사용해 보세요.
 */
package standalone.scheduler;
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
        else if (ch == 'A' || ch == 'a') {
            scheduler = new AgentGetCall();
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
