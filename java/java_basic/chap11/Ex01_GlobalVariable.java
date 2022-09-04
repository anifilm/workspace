class Cat {
    static int a = 5;  // [1] static 변수
    int num = 3;

    void printValue(int num) {
        this.num = num;
        System.out.println("num: " + this.num);
        System.out.println("a: " + a);
    }
}

class Ex01_GlobalVariable {
    public static void main(String[] args) {  // [2] 프로그램 시작 지점
        int num1 = 5;  // [3]
        int num2 = 2;  // [3]
        System.out.println(num1 + ", " + num2);


        Cat cat1 = new Cat();  // [4] 스택 영역에 생성
        cat1.num = 1;  // [5]
        cat1.a = 10;   // [6] static 변수에 직접 접근
        cat1.printValue(20);  // [7] 함수 호출
        System.out.println(cat1.num);  // [8]
        System.out.println(cat1.a);    // [9]

        Cat cat2 = new Cat();  // [10] 스택 영역에 생성
        cat2.num = 2;  // [11]
        cat2.a = 11;   // [12] static 변수에 직접 접근
        cat2.printValue(10);  // [13] 함수 호출
        System.out.println(cat2.num);  // [14]
        System.out.println(cat2.a);    // [15]
        System.out.println(cat1.a);    // [16]
    }
}
