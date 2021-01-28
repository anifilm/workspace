// 캡슐화가 이쿼지지 않은 예제
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

class ColdPatient {  // 환자가 받는 처방
    void takeSinivelCap(SinivelCap cap) {
        cap.take();
    }
    void takeSneezeCap(SneezeCap cap) {
        cap.take();
    }
    void takeSnuffleCap(SnuffleCap cap) {
        cap.take();
    }
}

class BadEncapsulation {
    public static void main(String[] args) {
        ColdPatient suf = new ColdPatient();

        // 콧물 캡슐 구매 후 복용
        suf.takeSinivelCap(new SinivelCap());

        // 재채기 캡슐 구매 후 복용
        suf.takeSneezeCap(new SneezeCap());

        // 코막힘 캡슐 구매 후 복용
        suf.takeSnuffleCap(new SnuffleCap());
    }
}
