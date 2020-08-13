package alone;

public class TwoDimentionAlphabet {

    public static void main(String[] args) {
        
        char[][] alphabets = new char[13][2];
        char ch = 'A';

        for (int i = 0; i < alphabets.length; i++) {

            for (int j = 0; j < alphabets[i].length; j++, ch++) {
                alphabets[i][j] = ch;
            }
        }

        for (int i = 0; i < alphabets.length; i++) {

            for (int j = 0; j < alphabets[i].length; j++) {

                System.out.print(alphabets[i][j]);
            }

            System.out.println( );
        }
    }
}