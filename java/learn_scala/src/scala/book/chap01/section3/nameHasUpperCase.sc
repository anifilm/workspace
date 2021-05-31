/* 자바 코드
boolean nameHasUpperCase = false;
for (int i = 0; i < name.length(); ++i) {
    if (Character.isUpperCase(name.charAt(i))) {
        nameHasUpperCase = true;
        break;
    }
} */


/* 자바 8 코드
boolean nameHasUpperCase =
    name.chars().anyMatch(
        (int ch) -> Character.isUpperCase((char) ch)
    );
*/


// 문자열에 대문자가 포함되어 있는지 확인하는 스칼라 예제
val nameHasUpperCase = name.exists(_.isUpper)
