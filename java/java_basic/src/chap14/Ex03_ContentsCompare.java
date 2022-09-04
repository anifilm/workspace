package chap14;

public class Ex03_ContentsCompare {
    public static void main(String[] args) {
        String str1 = new String("Apple");  // [1]
        String str2 = new String("apple");  // [2]
        String str3 = new String("Banana"); // [3]
        int cmp;

        // 인스턴스 내용 비교
        if (str1.equals(str3))  // [4] 문자열이 같은지 비교
            System.out.println("두 문자열은 같습니다.");
        else
            System.out.println("두 문자열은 다릅니다.");  // [5]

        cmp = str1.compareTo(str2); // [6] 대소문자 구분해 사전순 비교

        if (cmp == 0)
            System.out.println("두 문자열은 일치합니다.");
        else if (cmp < 0)
            System.out.println("사전의 앞에 위치하는 문자: " + str1);  // [7]
        else
            System.out.println("사전의 앞에 위치하는 문자: " + str2);

        if (str1.compareToIgnoreCase(str2) == 0)  // [8] 대소문자 구분 없이 사전순 비교
            System.out.println("두 문자열은 같습니다."); // [9]
        else
            System.out.println("두 문자열은 다릅니다.");
    }
}
