public class StringAlgorithm {
    public static void main(String[] args) {

        String str = "abcdabcdfgab";
        String sStr = "ab";

        int orStrLen = str.length();  // 오리지널 스트링
        int sStrLen = sStr.length();  // 찾으려는 단어

        char[] searchString = sStr.toCharArray(); // 찾을 단어를 character형 배열로 변환
        char[] allString = str.toCharArray();     // 전체 문장을 character형 배열로 변환

        int start;    // 전체의 문장에서 찾으려는 단어를 빼서 시작 인덱스를 구한다.
        int i;

        int count = 0;    // 문장에서 찾으려는 개수

        for (start = 0; start < orStrLen; start++) {  // 전체 문장의 처음부터 시작
            for (i = 0; i < sStrLen; i++) {  // 찾으려는 단어를 대입
                if (allString[start] == searchString[i]) {  // 각 단어의 첫 번째 단어의 비교
                    if (allString[start + 1] == searchString[i + 1] ) { // 두 번째 단어의 비교
                        count++; // 두 개의 단어가 같으면 하나 증가
                    }
                } else {
                    break;
                }
            }
        }
        System.out.println("찾아진 단어의 개수 = " + count);
    }
}
