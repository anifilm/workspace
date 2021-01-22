package chap02.section2;

public class CharacterEx {
    public static void main(String[] args) {
        char ch;

        ch = 'a';

        System.out.printf("sizeof(ch) is %d byte\n", 2);
        System.out.printf("sizeof('a') is %d byte\n", 2);
        System.out.printf("\n");

        System.out.printf("'a' in character format is %c\n", ch);
        System.out.printf("'a' in decimal format is %d\n", (int)ch);
        System.out.printf("\n");

        ch = 'a' + 1;
        System.out.printf("'a' + 1 in character format is %c\n", ch);

        ch = 97;
        System.out.printf("97 in character format is %c\n", ch);
    }
}
