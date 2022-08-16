class Ex08_DoWhile {
    public static void main(String[] args) {
        int num = 0;
        int count = 0;

        do {
            num++;

            if ((num % 5) != 0) continue;
            if ((num % 7) != 0) continue;

            count++;  // 5와 7의 배수인 경우에만 실행
            System.out.println(num);  // 5와 7의 배수인 경우에만 실행
        } while (num < 100);

        System.out.println("count: " + count);
    }
}
