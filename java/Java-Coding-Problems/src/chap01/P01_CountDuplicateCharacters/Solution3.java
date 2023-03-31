package chap01.P01_CountDuplicateCharacters;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.stream.Collectors;

public class Solution3 {
    private static final String TEXT = "Be strong, be fearless, be beautiful."
            + "And believe that anything is possible when you have the right"
            + "people there to support you.";
    // Ӝ -> Unicode: \u04DC, Code Point: 1244
    // 💕 -> Unicode: \uD83D\uDC95, Code Point: 128149
    // 🎼 -> \uD83C\uDFBC, Code Point: 127932
    // 😍 ->\uD83D\uDE0D, Code Point: 128525
    private static final String TEXT_CP = TEXT + "😍 I love 💕 you Ӝ so much 💕 😍 🎼🎼🎼!";

    public static Map<String, Integer> countDuplicateCharacters(String str) {
        Map<String, Integer> result = new HashMap<>();

        for (int i = 0; i < str.length(); i++) {
            int cp = str.codePointAt(i);
            String ch = String.valueOf(Character.toChars(cp));
            if (Character.charCount(cp) == 2) { // 2는 대리 쌍을 뜻한다.
                i++;
            }
            result.compute(ch, (k, v) -> (v == null) ? 1 : ++v);
        }

        return result;
    }

    public static void main(String[] args) {
        System.out.println("Input text: \n" + TEXT + "\n");

        System.out.println("\nASCII or 16 bits Unicode characters (less than 65,535 (0xFFFF)) examples:\n");

        System.out.println(countDuplicateCharacters(TEXT));
    }
}
