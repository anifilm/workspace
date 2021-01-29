// 문자열의 일부를 추출하기: Substring
class SubString {
    public static void main(String[] args) {
        String str1 = "abcdefg";
        String str2 = str1.substring(2);  // 인덱스 2부터 이후의 문자열 "cdefg"를 반환
        System.out.println(str2);

        String str3 = str1.substring(2, 4);  // 인덱스 2부터 4이전의 문자열 "cd"를 반환
        System.out.println(str3);
    }
}
