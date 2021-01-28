// 캡슐화가 잘 이뤄진 예제: 하나의 클래스로 캡슐화 완성하기
class SinusCap {
    void sniTake() {
        System.out.println("콧물이 싹~ 낫습니다.");
    }
    void sneTake() {
        System.out.println("재채기가 멎습니다.");
    }
    void snuTake() {
        System.out.println("코가 뻥 뚫립니다.");
    }
    void take() {  // 약의 복용 방법 및 순서가 담긴 메서드
        sniTake();
        sneTake();
        snuTake();
    }
}

class ColdPatient {  // 환자가 받는 처방
    void takeSinus(SinusCap cap) {
        cap.take();
    }
}

class OneClassEncapsulation {
    public static void main(String[] args) {
        ColdPatient suf = new ColdPatient();
        suf.takeSinus(new SinusCap());
    }
}
