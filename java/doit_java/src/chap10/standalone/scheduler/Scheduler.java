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
package chap10.standalone.scheduler;

public interface Scheduler {
    public void getNextCall();
    public void sendCallToAgent();
}
