// 현재 디렉토리(Current Directory)를 기준으로 한 실행
class AAA {
    public void showName() {
        System.out.println("My name is AAA");
    }
}

class ZZZ {
    public void showName() {
        System.out.println("My name is ZZZ");
    }
}

class WhatYourName {
    public static void main(String args[]) {
        AAA aaa = new AAA();
        aaa.showName();

        ZZZ zzz = new ZZZ();
        zzz.showName();
    }
}
