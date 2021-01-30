// instanceof 연산자의 활용
class Box {
    public void simpleWrap() {
        System.out.println("simple Wrapping");
    }
}

class PaperBox extends Box {
    public void paperWrap() {
        System.out.println("Paper Wrapping");
    }
}

class GoldPaperBox extends PaperBox {
    public void goldWrap() {
        System.out.println("Gold Wrapping");
    }
}

class Wrapping {
    public static void main(String[] args) {
        Box box1 = new Box();
        PaperBox box2 = new PaperBox();
        GoldPaperBox box3 = new GoldPaperBox();

        wrapBox(box1);
        wrapBox(box2);
        wrapBox(box3);
    }

    public static void wrapBox(Box box) {
        if (box instanceof GoldPaperBox) {
            ((GoldPaperBox)box).goldWrap();  // 형 변환 후 메서드 호출
        }
        else if (box instanceof PaperBox) {
            ((PaperBox)box).paperWrap();  // 형 변환 후 메서드 호출
        }
        else {
            box.simpleWrap();
        }
    }
}
