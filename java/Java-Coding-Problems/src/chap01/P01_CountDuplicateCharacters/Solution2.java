package chap01.P01_CountDuplicateCharacters;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.stream.Collectors;

public class Solution2 {
    private static final String TEXT = "Be strong, be fearless, be beautiful."
            + "And believe that anything is possible when you have the right"
            + "people there to support you.";
    // Ӝ -> Unicode: \u04DC, Code Point: 1244
    // 💕 -> Unicode: \uD83D\uDC95, Code Point: 128149
    // 🎼 -> \uD83C\uDFBC, Code Point: 127932
    // 😍 ->\uD83D\uDE0D, Code Point: 128525
    private static final String TEXT_CP = TEXT + "😍 I love 💕 you Ӝ so much 💕 😍 🎼🎼🎼!";

    public static Map<Character, Long> countDuplicateCharacters(String str) {
        Map<Character, Long> result = str.chars()
                .mapToObj(c -> (char) c)
                .collect(Collectors.groupingBy(c -> c, Collectors.counting()));

        return result;
    }

    public static void main(String[] args) {
        System.out.println("Input text: \n" + TEXT + "\n");

        System.out.println("\nASCII or 16 bits Unicode characters (less than 65,535 (0xFFFF)) examples:\n");

        System.out.println(countDuplicateCharacters(TEXT));
    }
}
