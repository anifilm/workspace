// Scheduler 인터페이스 정의하기
package chap10.section2.scheduler;

public interface Scheduler {
    public void getNextCall();
    public void sendCallToAgent();
}
