// String 클래스 메서드 활용
package chap06.section8;

public class StringEx {
    public static void main(String[] args) {
        String a = new String(" C#");
        String b = new String(",C++ ");

        System.out.println(a + "의 길이는 " + a.length());  // 3, 문자열의 길이(문자 개수)
        System.out.println(a.contains("#"));               // true, 문자열의 포함 관계

        a = a.concat(b);        // 문자열 연결
        System.out.println(a);  // " C#,C++ "

        a = a.trim();           // 문자열 앞 뒤의 공백 제거
        System.out.println(a);  // "C#,C++"

        a = a.replace("C#", "Java");  // 문자열 대치
        System.out.println(a);        // "Java,C++"

        String[] s = a.split(",");    // 문자열 분리
        for (int i = 0; i < s.length; i++)
            System.out.println("분리된 문자열" + i + ": " + s[i]);

        a = a.substring(5);     // 인덱스 5부터 끝까지 서브 스트링 반환
        System.out.println(a);  // "C++"

        char c = a.charAt(2);   // 인덱스 2의 문자 반환
        System.out.println(c);  // '+'
    }
}

/*

String의 특징과 객체 생성

String 클래스는 문자열을 나타낸다. 스트링 리터럴은 자바 컴파일러에 의해 모두 String 객체로 처리된다. String 클래스는 다음과 같이 다양한
생성자를 통해 여러가지 방법으로 String 객체를 생성할 수 있게 한다.

// 스트링 리터럴로 String 객체 생성
String str1 = "abcd";

// String 클래스의 생성자를 이용하여 String 객체 생성
char data[] = {'a', 'b', 'c', 'd'};
String str2 = new String(data);
String str3 = new String("abcd");  // str2와 str3은 모두 "abcd" 문자열


스트링 리터럴과 new String()

스트링 리터럴과 new String()으로 생성된 스트링 객체는 서로 다르게 관리된다. 스트링 리터럴은 자바 내부에서 리터럴 테이블로 특별히 관리하며, 동일한 리터럴은 공유된다.
new String()으로 생성된 스트링 문자열은 new를 이용하여 생성되는 다른 객체와 동일하게 힙 메모리에 생성된다.


스트링 객체는 수정이 불가능하다.

리터럴이든 new String()으로 생성된 객체이든, 일단 생성된 스트링 문자열 객체는 수정이 불가능하다.


String 클래스 주요 생성자

생성자                         설명
String()                      빈 스트링 객체 생성
String(char[] value)          char 배열에 있는 문자들을 스트링 객체로 생성
String(String original)       매개변수로 주어진 문자열과 동일한 스트링 객체 생성
String(StringBuffer buffer)   매개변수로 주어진 스트링 버퍼의 문자열을 스트링 객체로 생성


String 클래스의 주요 메서드

메서드                                 설명
char charAt(int index)                index 인덱스에 있는 문자 값 반환
int codePointAt(int index)            index 인덱스에 있는 유니코드 값 반환
int compareTo(String anotherString)   두 문자열을 사전 순으로 비교하여 두 문자열이 같으면 0, 현 문자열이 anotherString보다 먼저 나오면 음수, 아니면 양수 반환
String concat(String str)             현재 문자열 뒤에 str 문자열을 덧붙인 새로운 문자열 반환
boolean contains(CharSequence s)      s에 지정된 문자들을 포함하고 있으면 true 반환
int length()                          문자열의 길이(문자 개수) 반환
String replace(Charsequence target, Charsequence replacement)   target이 지정하는 일련의 문자들을 replacement가 지정하는 문자들로 변경된 문자열 반환
String[] split(String regex)          정규 표현식 regex에 일치하는 부분을 중심으로 문자열을 분리하고, 분리된 문자열들을 배열로 저장하여 반환
String subString(int beginIndex)      beginIndex 인덱스부터 시작하는 서브 문자열 반환
String toLowerCase()                  소문자로 변경한 문자열 반환
String toUpperCase()                  대문자로 변경한 문자열 반환
String trim()                         문자열 앞뒤의 공백 문자들을 제거한 문자열 반환

 */
