using System;

class StringClassNote {
    static void Main() {
        // str 변수에 테스트 문자열 설정
        string str = "";     // 빈 값으로 초기화
        str = String.Empty;  // 빈 값으로 초기화
        str = " Abc Def Fed Cba ";  // 앞뒤 공백 한자씩 추가하여 17자

        Console.WriteLine(str);  // 전체 문자열 출력
        Console.WriteLine(str.Length);  // 17
        Console.WriteLine(str[6 - 1]);  // D
        Console.WriteLine(str.ToUpper());  // 대문자
        Console.WriteLine(str.ToLower());  // 소문자

        // 공백 제거
        Console.WriteLine(str.Trim());  // 양쪽 공백 제거
        Console.WriteLine(str.TrimStart()); // 왼쪽 공백 제거
        Console.WriteLine(str.TrimEnd());   // 오른쪽 공백 제거

        // 변환
        Console.WriteLine(str.Replace("Def", "디이에프"));

        // 메서드 체이닝(체인)
        Console.WriteLine(str.Replace("Def", "디이에프").Replace("Fed", "XYZ").ToLower());

        // 검색
        Console.WriteLine(str.IndexOf('e'));  // 6번째 인덱스에 위치
        Console.WriteLine(str.LastIndexOf('e'));  // 10번째 인덱스에 위치
        Console.WriteLine(str.Substring(5, 3));   // 5번째 인덱스에서부터 3자 반환
        Console.WriteLine(str.Substring(5));  // 5번째 이후로 모두 가져오기
        Console.WriteLine(str.Remove(5, 3));  // 5번째 인덱스에서부터 3자 삭제하고 출력

        // 비교
        Console.WriteLine(str[2 - 1] == str[16 - 1]);  // A == a => false
        Console.WriteLine(String.Compare("A", "C"));   // 0(같음), 1(다름>), -1(다름<)
        Console.WriteLine("A".CompareTo("C"));   // A < C : -1
        Console.WriteLine("Abc".Equals("Abc"));  // True
        Console.WriteLine(String.Equals("Abc", "aBC"));  // False

        Console.WriteLine("http://www.dotnetkorea.com".StartsWith("http"));  // True
        Console.WriteLine("http://www.dotnetkorea.com".EndsWith(".com"));  // True

        var hi1 = "안녕";
        var hi2 = "하세요.";

        Console.WriteLine(hi1 + hi2);
        Console.WriteLine(String.Concat(hi1, hi2));
        Console.WriteLine(String.Format("{0} {1} {0}", hi1, hi2));
        Console.WriteLine($"{hi1} {hi2}");

        Console.WriteLine(String.Format("{0:C}", 1000));  // 통화량
        Console.WriteLine(String.Format("{0:#,###}", 1000));  // 세자리 콤마

        string[] strArray = str.Trim().Split(' ');
        foreach (string s in strArray) {
            WriteLine($"{s}");
        }
    }
}
