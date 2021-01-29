// 문자열 연결시키기: Concatenating
class StringConcat {
    public static void main(String[] args) {
        String str1 = "Coffee";
        String str2 = "Bread";

        String str3 = str1.concat(str2);
        System.out.println(str3);  // "CoffeeBread"

        String str4 = "Fresh".concat(str3);
        System.out.println(str4);  // "FreshCoffeeBread"
    }
}
