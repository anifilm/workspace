// 캡슐화가 잘 이뤄진 또 다른 예제: 포함 관계로 캡슐화 완성하기
class SinivelCap {  // 콧물 처치용 캡슐
    void take() {
        System.out.println("콧물이 싹~ 낫습니다.");
    }
}

class SneezeCap {  // 재채기 처치용 캡슐
    void take() {
        System.out.println("재채기가 멎습니다.");
    }
}

class SnuffleCap {  // 코막힘 처치용 캡슐
    void take() {
        System.out.println("코가 뻥 뚫립니다.");
    }
}

class SinusCap {  // 약의 복용 방법 및 순서가 담긴 클래스
    SinivelCap sniCap = new SinivelCap();  // 캡슐 객체 생성
    SneezeCap sneCap = new SneezeCap();    // 캡슐 객체 생성
    SnuffleCap snuCap = new SnuffleCap();  // 캡슐 객체 생성

    void take() {
        sniCap.take();
        sneCap.take();
        snuCap.take();
    }
}

class ColdPatient {  // 환자가 받는 처방
    void takeSinus(SinusCap cap) {
        cap.take();
    }
}

class CompEncapsulation {
    public static void main(String[] args) {
        ColdPatient suf = new ColdPatient();
        suf.takeSinus(new SinusCap());
    }
}
