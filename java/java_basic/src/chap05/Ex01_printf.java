package chap05;

class Ex01_printf {
    public static void main(String[] args) {
        String name = "Hong Gil Dong";
        int age = 20;
        double height = 175.5;

        System.out.printf("%s의 나이는 %d이고, 키는 %f입니다.\n", name, age, height);
        System.out.printf("%s의 나이는 %d이고, 키는 %.2f입니다.\n", name, age, height);
    }
}
