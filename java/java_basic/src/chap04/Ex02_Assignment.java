package chap04;

class Ex02_Assignment {
    public static void main(String[] args) {
        short num = 10;
        num += 77L;
        System.out.println(num);

        num = (short)(num + 77L);
        System.out.println(num);
    }
}
