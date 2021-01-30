// 오토 박싱(Auto Boxing) & 오토 언박싱(Auto Unboxing)
class AutoBoxingUnboxing2 {
    public static void main(String[] args) {
        Integer iObj = 10;
        iObj++;  // 오토 언박싱, 연산 이후 오토 박싱 진행
        System.out.println(iObj);

        iObj += 3;  // 오토 언박싱, 연산 이후 오토 박싱 진행
        System.out.println(iObj);

        int num = iObj + 5;  // 오토 언박싱 진행
        Integer rObj = iObj - 5;  // 오토 언박싱, 연산 이후 오토 박싱 진행
        System.out.println(num);
        System.out.println(rObj);
    }
}
